#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* fname;
    char* lname;
    int pid;
}Paitent;

void get(Paitent *p){
    printf("Please enter first name:");
    p->fname = malloc(15 * sizeof(char));
    scanf("%s", p->fname);
    //fgets(p->fname, 20, stdin);
    p->lname = malloc(15 * sizeof(char));
    printf("Please enter last name:");
    //fgets(p->fname, 20, stdin);
    scanf("%s", p->lname);
    p->pid = rand()%1000 + 1;
}
void printP(Paitent *p){
    printf("%s ", p->fname);
    printf("%s ", p->lname);
    printf("- Paitent id: %d", p->pid);
}

int main(){
    int num = 0;
    printf("\nSO I DONT MEMORY LEAK (I prefer strong memory reiforcement)\n");
    printf("Please enter number of paitents:");
    scanf("%d", &num);
    Paitent *p = (Paitent*) malloc(25 * sizeof(Paitent));
    if (p == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }
    for(int i = 0; i < num; i++){
        printf("\nEnter details for paitent %d:\n", i+1);
        get(&p[i]);
    }
    printf("\n");
    printf("List of painets in descending order by PaitentID:");
    printf("\n");
    for(int i = 0; i < num; i++){
        //printf("\nDetails of paitents %d:\n", i+1);
        printf("\n");
        printP(&p[i]);
    }   
    printf("\n"); 
        /*printf("first Name: %s\n", p->fname);
        printf("last name: %s\n", p->lname);
        printf("id: %d\n", p->pid);*/
}
