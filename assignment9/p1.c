#include<stdio.h>
#include<stdlib.h>
#define SIZE 25
char* mystrcat(char* dest, const char* src);
char* mystrcat(char* dest, const char* src){
   int T = 1;
   int counter = 0;
   while(T){
      if(src[counter] == '\0'){
         T = 0;
      }
      else{
         dest[0] = src[counter];
         counter++;
         dest++;   
      }
   }
   dest[0] = ' ';
   dest++;
   return dest;
}

int main(){
   char* str = (char*)calloc(100,1);
   char* str1 = (char*)calloc(100,1);
   char* str2 = (char*)calloc(100,1); 
   char combo[255];
   char *p = combo;
   char *p2 = p;
   printf("Please enter your first word\n");
   scanf("%s", str);
   printf("Please enter your second word\n");
   scanf("%s", str1); 
   printf("Please enter your third word\n");
   scanf("%s", str2);
   p2 = mystrcat(p2, str);
   p2 = mystrcat(p2, str1);
   p2 = mystrcat(p2, str2);
   p2--;
   p2[0] = '\0';
   printf("%s", combo);
   printf("\n");
   return 0;
}
