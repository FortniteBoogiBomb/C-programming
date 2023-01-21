#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
   int a;
   int b;
   printf("Enter your value for int 1:\n");
   scanf("%d", &a);//get input from user
   printf("Enter your value for int 2:\n");
   scanf("%d", &b);//get input from user
   //add
   printf("the sum of %d and %d is:%d\n",a, b, (a+b));

   //subtract
   printf("the diffrence of %d and %d is:%d\n", a, b, (a-b));
   
   //multiply
   printf("the product of %d and %d is %d\n", a, b, (a*b));

   //divide
   float f = (float) a/b;
   printf("the division of %d and %d is %.2f\n", a, b, f);

   //remainder (modulo decomposed) 
   printf("the remainder of %d and %d is: %d\n", a, b, (a%b));
}
