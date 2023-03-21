#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* update(const char* sentence, char* target, char* newb);
char* update(const char* sentence, char* target, char* newb){
   char *updated; 
   int newblen = strlen(newb);
   int targetlen = strlen(target);
   int count = 0;
   int i = 0;
   //printf("main sentence is %s\n", sentence);
   //printf("target string is %s\n", target);
   //printf("replace target with: %s\n", newb);
   for(i = 0; sentence[i] != '\0'; i++){
      if(strstr(&sentence[i], target) == &sentence[i]){//find the target in sentence
         count++;
         i += targetlen - 1;
      }
   }
   updated = (char*)malloc(i + count * (newblen - targetlen) + 1);//create space for new string in case it is larger
   i = 0;
   while(*sentence){//loop trhough sentence
      if(strstr(sentence, target) == sentence){ //find needle in haystack?
         strcpy(&updated[i], newb);
         i += newblen;
         sentence += targetlen;  
      } 
      else{
         updated[i++] = *sentence++; //update sentence incrementally based index   
      }
   }
   updated[i] = '\0';//add spaces
   return updated;
}
int main(void){
   char *sentence = malloc(100);
   char *target = malloc(25);
   char *newb = malloc(25);
   char *updated = NULL;
   printf("enter your sentence to be changed\n");
   fgets(sentence, 100, stdin);
   printf("Now, enter your target string\n");
   scanf("%s", target);
   //fgets(target, 25, stdin);
   printf("Now, enter the replacement for target\n");
   scanf("%s", newb);
   //fgets(newb, 25, stdin);
   printf("\n");
   printf("target is %s", target);
   printf("\n");
   printf("repalce target with: %s\n", newb);
   printf("\n\n\n");
   printf("original string is: %s\n", sentence);
   updated = update(sentence, target, newb); 
   printf("the new string is: %s", updated);
}

