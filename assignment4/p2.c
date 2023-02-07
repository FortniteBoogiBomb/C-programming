#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int gcd(int num, int num2);


int main(){
   int i, j;
   printf("Enter two numbers to find the GCD\n");
   scanf("%d %d", &i, &j);
   printf("GCD of: %d and %d is == %d", i, j, gcd(i, j));
   return 0;
}


int gcd(int num, int num2){
   if(num2 != 0){
      return gcd(num2, num % num2);
   }
   else
      return num;
}
