#include<stdlib.h>
#include<stdio.h>


void swap(int *ptr, int *ptr2);

void swap(int *ptr, int *ptr2){
   int x;
   x = *ptr;
   *ptr = *ptr2;
   *ptr2 = x;
}

int main(){
   int n,n1;
   printf("Enter sample grade 1:\n");
   scanf("%d", &n);
   printf("Enter sample grade 2:\n");
   scanf("%d", &n1);
   
   printf("Grade 1 before swap: %d Grade 2 before swap: %d\n", n, n1);
   swap(&n, &n1);
   printf("After swap grade 1: %d Grade 2 is: %d\n", n, n1);

   return 0;
}
