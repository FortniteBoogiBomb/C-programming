#include<stdio.h>
#include<stdlib.h>
//Here are our function prototypes 
double prod(double x, double y);
double isBig(int w, int z);

int main(){
   int i = 10;
   int j = 200;
   printf("Call First function in main\n");
   isBig(i, j);//1. when this function is called, the arguments of "isBiug" are pused to the stack
   printf("your functions call each other correctly!.........and program terminates\n");
}

double prod(double x, double y){
   return(x*y);
   //the return statement here, pops the arguments off the stack using LIFO (Last in first out)
}
double isBig(int w, int z){
   //2. we know the stack currently holds a pointer to the varibles initialized in main.
   //inside of isBig we call our second function "prod"
   printf("Function calling second function here!\n");
   prod(w, z);
   //after prod returns, the stack holds the values of w and z... and pushesw to return a number for us. 
   if(w > 10){
      printf("operation successfull\n");
   }
   printf("W is:%d\n", w);
   return w;
}
