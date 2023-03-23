#include<stdio.h>
#include<stdlib.h>
#define SIZE 25 //macro for string size (unused) 
void replacevalue(char **word, char **word2, char **word3);
void send(char *word, char *word2, char *word3);

void send(char *word, char *word2, char *word3){
   replacevalue(&word, &word2, &word3);
}
void replacevalue(char **word, char **word2, char **word3){
   if(*word != NULL) {
        printf("%s ", *word);
        word++;
    }
    if(*word2 != NULL) {
        printf("%s ", *word2);
        word2++;
    }
    if(*word3 != NULL) {
        printf("%s", *word3);
        word3++;
    }
}
int main(){
   char* word;
   word = malloc(4 * sizeof(word));
   char* word2;
   word2 = malloc(4 * sizeof(word2));
   char* word3;
   word3 = malloc(4 * sizeof(word3));
   printf("Plese enter word 1:");
   scanf("%s", word);
   printf("Plese enter word 2:");
   scanf("%s", word2);
   printf("Plese enter word 3:");
   scanf("%s", word3);
   send(word, word2, word3);
   return 0;
}
