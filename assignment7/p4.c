#include<stdlib.h>
#include<stdio.h>


void sum(int *ptr, int len);

void sum(int *ptr, int len){
   int i; 
   int sum = 0;
   for(i = 0; i < len; i++){
      sum = sum + *(ptr + i);
   }
   printf("The sum of all elements in array is: %d\n", sum);
}


int main(){
   int *arr;
   int size;
   printf("Please enter size of you array\n");
   scanf("%d", &size);
   arr=(int*)malloc(size*sizeof(int));
   if(arr ==NULL){
      printf("Error: you did something wrong\n");
      return 1;
   }

   printf("please enter %d integers to fill you array\n", size);
   for(int i = 0; i<size; i++){
      scanf("%d", &arr[i]);
   }
   printf("Array:\n");
   for(int i = 0; i < size; i++){
      printf("%d\n", arr[i]);
   }
   sum(arr, size);
   free(arr);
   return 0;
}
