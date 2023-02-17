#include <stdio.h>
#include <stdlib.h>
int arraySize = 1;
int main(){
   int* datas;
   printf("enter size of your array\n");
   scanf("%d", &arraySize);
   if(arraySize > 1){
      datas = (int*) malloc(arraySize*(4));   
      //printf("Enter the numbers you want in your array\n");
      for (int i = 0; i < arraySize; ++i){
         datas[i] = -1000;
      }
      for (int i = 0; i < arraySize; ++i){
         printf("Waiting on input number %d ... \n", (i+1) );//lol the assigment description has less inputs than array size...
         scanf("%d", &datas[i]);                             //thats why I made this annoying print statement
      }
   }
   else{
      printf("ERROR, array length invalid");
      exit(1);
   }
   int elements[arraySize];
   for (int i = 0; i < arraySize; i++){
      elements[i] = datas[i];
   }
   for (int i = 0; i < arraySize; i++){
      for (int j = 0; j < arraySize; j++){   
         if( (elements[i] == datas[j] ) && (j < i) ) {
            elements[i] = -1000;
         }
      }
   }
   printf("Output: ");
   for (int i = 0; i < arraySize; i++){
      if(elements[i] != -1000){
         printf("%d ", elements[i]);
      }
   }
   free(datas);
}

