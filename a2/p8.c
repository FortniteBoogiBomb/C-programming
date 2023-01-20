#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
   
   int r = 0;
   printf("Please enter a radius");
   scanf("%d", &r);
   
   int diameter = 2*r;
   int circumference = 2*3.14*r;
   int area = 3.14*r*r;

   printf("The diamater of a circle with radius of %d is %d\n", r, diameter);
   printf("The area of a circle with radius %d is %d\n", r, area);
   printf("The circumference of a circle with a radius of %d is %d\n", r, circumference); 

}
