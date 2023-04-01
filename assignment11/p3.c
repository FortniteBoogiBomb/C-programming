#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//it speaks for itself, don't need pointless comments

typedef struct {
    int* number;
    char* streetname;
    char* streetType;
} Address;
typedef struct {
    char* studentName;
    Address address;
} Student;

void get(Student *pp){
    printf("\nEnter Name:");
    pp->studentName = malloc(10 * sizeof(char));
    scanf("%s", pp->studentName);
    //if(*pp->studentName > 10){
    //  printf("Woahhhhhhhh there cowboy...Why would you test such a big name?\n");
    //  printf("That name is too big for my shitty code\n");
    //  printf("Try something smaller than 10 next time\n");     
    //  exit(1);
    //}
    printf("enter address number:");
    pp->address.number = malloc(15 * sizeof(int));
    scanf("%d", pp->address.number);
    printf("enter street name:");
    pp->address.streetname  = malloc(15 * sizeof(char));
    scanf("%s", pp->address.streetname);
    printf("Enter street type:");
    pp->address.streetType = malloc(15 * sizeof(char));
    scanf("%s", pp->address.streetType);
}

void printP(Student *pp){
    printf("%-10s\t", pp->studentName);
    printf("%-3d ", *pp->address.number);
    printf("%-10s\t", pp->address.streetname);
    printf("%-10s\t", pp->address.streetType);
}


int main() {
    int n = 0;
    char* t;
    printf("\n /*How many student records you want to enter?*/") ;
    printf("\n\n Enter Limit : ") ;
    scanf("%d", &n) ;
    //Address *p = (Address*) malloc(25 * sizeof(Address));
    Student *pp = (Student*) malloc(25 * sizeof(Student));
    for(int i = 0; i < n; i++){
        printf ("\n Enter Student-%d Details", i + 1);
        printf ("\n --------------------------\n");
        get(&pp[i]);
    }
    for(int i = 0; i < n; i++){
        printf("\n");
        for(int j = i + 1 ; j < n ; j++ ){
            if(strcmp(pp[i].studentName, pp[j].studentName) > 0 ){
                  t = pp[i].studentName;
                  pp[i].studentName = pp[j].studentName;
                  pp[j].studentName = t;
            }
            printf("\n\t Data after rearrangement" ) ;
            printf("\n -----------------------------------\n" ) ;
            printf("Student Name\tAddress\n" ) ;
            printf("--------------------------------------\n" ) ;
      }
    printP(&pp[i]);
    }
    free(pp);
    return 0;
}
