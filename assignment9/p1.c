#include<stdio.h>
#include<stdlib.h>
#define SIZE 25 //macro for string size (unused) 
char* mystrcat(char* dest, const char* src);
char* mystrcat(char* dest, const char* src){
   int T = 1;//True or False 1 is true 0 is false
   int counter = 0;
   while(T){
      if(src[counter] == '\0'){//breakout of condition if a null terminaitor is reached
         T = 0;
      }
      else{
         dest[0] = src[counter];//populate the destiantion string with the source (incremented with counter)
         counter++;//increase count and dest synonomously 
         dest++;   
      }
   }
   dest[0] = ' ';//handle spaces between words
   dest++;
   return dest;//return the new string 
}

int main(){
   char* str = (char*)calloc(100,1);//create space for our stings
   char* str1 = (char*)calloc(100,1);
   char* str2 = (char*)calloc(100,1); 
   char combo[255];//make a character buffer to store our returned string 
   char *p = combo;
   char *p2 = p;
   printf("Please enter your first word\n");//collect three string(s) 
   scanf("%s", str);
   printf("Please enter your second word\n");
   scanf("%s", str1); 
   printf("Please enter your third word\n");
   scanf("%s", str2);
   p2 = mystrcat(p2, str);
   p2 = mystrcat(p2, str1);
   p2 = mystrcat(p2, str2);
   p2--;//
   p2[0] = '\0';//implemented so program doesnt freak out from spcaes 
   printf("%s", combo);
   printf("\n");
   free(str);
   free(str1);
   free(str2);
   return 0;
}
