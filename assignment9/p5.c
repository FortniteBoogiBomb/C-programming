#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int indexOf(char * haystack, char * needle, int fromIndex);
int indexOf(char * haystack, char * needle, int fromIndex){
   long unsigned int i = 0;//for some reason, regular integeres where causing conflicting type errors
   long unsigned int j = 0;//I dont know why we cant use regular integers 
   printf("needle is %s\n", needle);//make sure function recieves target
   printf("haystack is %s\n", haystack);//make sure entire sentence passed to function
   while(haystack[i] != '\0'){//loop through sentence until first null terminator 
      while( (haystack[i] != needle[0]) && (haystack[i] != '\0') ){//if sentence != needle
         i++;//and next following null terminator(s) of sentence reacehd 
      }//continue looping through sentence with index i
      if(haystack[i] == '\0')//break out of condition for every null terminator 
         return -1;//-1
      fromIndex = i;//set return value to end of sentence 
      
      while( (haystack[i] == needle[j]) && (haystack[i] != '\0') && (needle[j] != '\0') ){
         i++;
         j++;
      } 
      if(needle[j] == '\0')//find end of needle 
         return(fromIndex);//return index of needle 
      if(haystack[i] == '\0')//null termintor in sentence found, break out of condition 
         return -1;//ideally, i would swap these with breakpoints?
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
   fgets(need, 25, stdin);//scanf cannot handle spaces as commandline input
   printf("Now, enter your haystack\n");
   fgets(hay, 50, stdin);
   index = indexOf(hay, need, ind);//call function 
   if(index == -1){
      printf("Not Found");   
   }
   else
      printf("String found at index: %d", index+1);
   return 0;
}
