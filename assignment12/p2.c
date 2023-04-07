#include <stdio.h>
int add( int x, int y);
int add( int x, int y){
    int temp;
    while(y!=0){
        temp = (x&y) << 1;
        x = x^y;
        y = temp;
    }
    return x;
}
int main(void){
   int x, y;
   int multiplyValue = 0;
   printf("Enter first number");
   scanf("%d", &x);
   printf("Enter second number");
   scanf("%d", &y);
   for(int i = 0; i < y; i++){
      multiplyValue = add(multiplyValue, x); 
   }  
   printf("%d x %d = %d", x, y, multiplyValue);
   
}
