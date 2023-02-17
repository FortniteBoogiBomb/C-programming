#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int myFunc(int arr[], int x, int *p){i


//}
int doStuff(char datas[], char letter);
int main(){
   char datas[100];
   char letter;
   int brain = -1;
   printf("enter your string up to 100 elements\n");
   scanf ("%[^\n]%*c", datas);
   printf("enter a character (a-z, A-Z, space)\n");
   scanf("%c", &letter);
   //printf("Letter is %d\n", (int)letter);  
   int j = (int)letter; 
   if( ( (j < 123) && (j > 96) ) || ( (j < 91) && (j > 64) ) || (j == 32) ){
      printf(" ");
   }
   else{
      printf("char is incompatible\n");
      exit(1);
   }
   brain = doStuff(datas, letter);
   printf("%c occurs %d times\n", letter, brain);
}

int doStuff(char datas[], char letter){
   int pee = 0;
   for(int i=0; i < 100; i++){      
      if(letter == datas[i]){
         pee+=1;
      }
   }
   return pee;
}
