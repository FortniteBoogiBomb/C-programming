#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int indexOf(char * haystack, char * needle, int fromIndex);
int indexOf(char * haystack, char * needle, int fromIndex){
   long unsigned int i = 0;
   long unsigned int j = 0;
   printf("needle is %s\n", needle);
   printf("haystack is %s\n", haystack);
   while(haystack[i] != '\0'){
      while( (haystack[i] != needle[0]) && (haystack[i] != '\0') ){
         i++;
      }
      if(haystack[i] == '\0')
         return -1;//-1
      fromIndex = i;
      
      while( (haystack[i] == needle[j]) && (haystack[i] != '\0') && (needle[j] != '\0') ){
         i++;
         j++;
      } 
      if(needle[j] == '\0')
         return(fromIndex);
      if(haystack[i] == '\0')
         return -1;
      i = fromIndex + 1;
      j = 0;
   }
   return fromIndex;
}




int main(){
   char need[25];
   char hay[50];
   int ind = 0;
   int index = 0;
   printf("enter your needle\n");
   fgets(need, 25, stdin);
   printf("Now, enter your haystack\n");
   fgets(hay, 50, stdin);
   index = indexOf(hay, need, ind);
   if(index == -1){
      printf("Not Found");   
   }
   else
      printf("String found at index: %d", index+1);
   return 0;
}
