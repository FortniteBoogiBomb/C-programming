#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* update(const char* sentence, char* target, char* replacement);
char* update(const char* sentence, char* target, char* replacement){
   char *updated; 
   int replen = strlen(replacement);
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
   updated = (char*)malloc(i + count * (replen - targetlen) + 1);//create space for new string in case it is larger
   i = 0;
   while(*sentence){//loop trhough sentence
      if(strstr(sentence, target) == sentence){ //find needle in haystack?
         strcpy(&updated[i], replacement);
         i += replen;
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
   char *sentence = malloc(100);//dynamically allocate space for sentence 
   char *target = malloc(25);//allocate space 
   char *replacement = malloc(25);
   char *updated = NULL;//create pointer for return value
   printf("enter your sentence to be changed\n");
   fgets(sentence, 100, stdin);//must use a combination of scan anf fgets to recieve all inputs 
   printf("Now, enter your target string\n");
   scanf("%s", target);
   //fgets(target, 25, stdin);
   printf("Now, enter the replacement for target\n");
   scanf("%s", replacement);
   //fgets(newb, 25, stdin);
   printf("\n");
   printf("target is %s", target);
   printf("\n");
   printf("repalce target with: %s\n", replacement);
   printf("\n\n\n");
   printf("original string is: %s\n", sentence);
   updated = update(sentence, target, replacement); 
   printf("the new string is: %s", updated);
   free(sentence);
   free(target);
   free(replacement);
}

