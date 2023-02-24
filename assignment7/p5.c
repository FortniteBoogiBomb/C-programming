#include<stdlib.h>
#include<stdio.h>
#define MAX_EMPLOYEES 100


int *ptr = NULL;

void func(int arr[], const int thresh);

void func(int arr[], const int thresh){
   int count = 0;
   printf("Function started\n");
   //find size using sizeof????
   //my compiler does not like sizeof i cannot use it even on a normal variable without a segfault?????
   //for instance int a = 2;
   //int x;
   //x = sizeof(a); : segfault! (I have all neccesary libraries) 
   //also, stackoverflow says it is literally impossible to ge the size of the array "from a decayed pointer!" without using malloc or macro FUNCTIONS
   //which is beyond the scope of this class (in my opinion) 
   for(int i = 0; i < MAX_EMPLOYEES; i++){
      if(arr[i] > thresh){
         count++;
      }
   }
   ptr = &count;//no return use pointer to print in main...
}


int main(void){
   int arr[MAX_EMPLOYEES];
   for(int j = 0; j < MAX_EMPLOYEES; j ++){
      arr[j] = 0;
   }
   int score = -1;
   printf("please enter integers to fill you array type -1 to stop typing\n");
   int employeecount = 0;
   int stopit = 1; 
   int threshpoint = 0;
   while(stopit){
      scanf("%d", &score);
      if(score == -1 || employeecount == MAX_EMPLOYEES){
         stopit = 0;
      }
      employeecount++;
      arr[employeecount-1] = score;
   } 
   for(int i = 0; i < employeecount; i++){
      printf("%d", arr[i]);
   }   
   printf("Enter a threshold\n");
   scanf("%d", &threshpoint);
   printf("Function called\n");   
   func(arr, threshpoint);
   printf("the values greater than threshold: %d\n", *ptr);
}
