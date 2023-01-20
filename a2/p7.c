#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
   int a = 0;
   int b = 0;
   int nofloat = 0;
   printf("Enter your value for int 1:\n");
   scanf("%d", &a);//get input from user
   printf("Enter your value for int 2:\n");
   scanf("%d", &b);//get input from user

   nofloat = a + b;//add
   printf("the sum of %d and %d is:%d\n",a, b, nofloat);

   nofloat = a - b;//subtract
   printf("the diffrence of %d an d%d is:%d\n", a, b, nofloat);
   
   nofloat = a * b;//multiply
   printf("the product of %d and %d is %d\n", a, b, nofloat);

   float temp = (float) a/b;
   printf("the division of %d and %d is %.2f\n", a, b, temp);

   temp = a-(a/b)*b;//remainder
   printf("the remainder of %d and %d is: %.2f\n", a, b, temp);
}
