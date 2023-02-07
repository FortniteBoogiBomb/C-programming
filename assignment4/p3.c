#include<stdio.h>
#include<stdlib.h>
int isPerfectNumber(int num);


int main(){
   int i, j;
   printf("Enter your number and I will tell you if it's perfect\n");
   scanf("%d", &i);
   isPerfectNumber(i);
   /*
   if(isPerfectNumber(i) == ){
      printf("%d is a perfect number\n", i);
   }
   else {
      printf("%d is not a perfect number\n", i);
   }*/
}


int isPerfectNumber(int num){
   int temp = 0;
   for(int i = 1; i < num; i++){
      if( num%i == 0){
         temp += i;
      }
   }
   if(temp == num){
      printf("%d is a perfect number\n", num);
   }
   else{
      printf("%d is not a perfect number\n", num);
   }
}
