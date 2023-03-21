#include <stdio.h>
#include <stdlib.h>
#define SZ 10

int* find_max(int *arr, int size);
int* find_min(int *arr, int size);
int find_difference(int *arr, int size);

int* find_max(int *arr, int size){
   int *max;
   int count;
   //int where;
   max = arr;
   *max = *arr;
   for(count = 0; count < size; count++){
      if(*(arr+count) > *max){
         *max = *(arr+count);
         //where = count+1;
      }
   }
   printf("max is: %d\n", *max);
   return max;
}

int* find_min(int *arr, int size){
   int *min;
   int count;
   //int where;
   min = arr;
   *min = *arr;
   for(count = 0; count < size; count++){
      if( *(arr+count) < *min){
         *min = *(arr+count);
      }
   }
   printf("min is: %d\n", *min-1);
   return min;
}

int find_difference(int *arr, int size){
   int dif;
   int weirdo;
   dif = *find_max(arr,size) - *find_min(arr,size); 
   weirdo = dif + 1;//if you can find a better way to do this, please explain...
   printf("diffrence between Max and Min is: %d\n", weirdo);
   return weirdo;
}


int main(){
   int array[SZ];
   printf("Enter elements: ");
   for (int i = 0; i < SZ; ++i){
      scanf("%d", array + i);
   }
   find_max(array, SZ);
   find_min(array, SZ);
   find_difference(array, SZ);
   return 0;
}
