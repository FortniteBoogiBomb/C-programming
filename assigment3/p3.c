#include<stdio.h>
#include<stdlib.h>

int main(){
   int i;
   int x = 0;
   printf("What is our starting value? (only positive real numbers accepted)\n");
   scanf("%d", &i); 
   printf("output:\n");
   if(i <= 0){
      printf("You entered bad number\n");
   }
   for(i; i>=1; i--){
      x+=1;
      if(i % 15 == 0){
         printf("Fizz-Buzz");
      }      
      else if(i % 5 == 0){
         printf("Buzz");
      }
      else if(i % 3 == 0){
         printf("Fizz"); 
      }
      else printf("%d", i);
      if(x == 4){
         printf("\n");
         x = 0;
      }
   }
   return 0;
}
