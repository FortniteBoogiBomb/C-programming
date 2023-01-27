#include<stdio.h>
#include<stdlib.h>
#define SIZE_BITS  2 
#define INTS (sizeof(int) * SIZE_BITS)
void Print(unsigned n){//print in Binary
   short int pos;
   for (pos = (INTS -1) ; pos >= 0 ; pos--){
      (n & (1 << pos))? printf("1"): printf("0");       
   }
}
unsigned int reverse(unsigned int x){//function to reverse bits of int
   unsigned int count = (INTS-1); 
   unsigned int temp = x;      
   x >>= 1; 
   while(x){
      temp <<= 1;  
      temp |= x & 1; 
      x >>= 1; 
      count--;
   }
   temp <<= count; 
   return temp;
}
int main(){
   unsigned int i = 0;
   unsigned int r = 0;
   printf("Enter the number : ");
   scanf("%u",&i);
   r = reverse(i);
   printf("\n\n8-bit representation of Number reversed:" );
   Print(r);  
   printf("\n\n"); 
   return 0;
}




