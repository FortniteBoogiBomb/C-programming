#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int wid = 0;
  int len = 0;
  int i = 0;
  int average = 1.00;
  //int a;
  //size_t j = 0;
  printf("Please enter width of surveyed area (in meters)");
  scanf("%d", &wid);
  printf("Please enter length of surveyed area");
  scanf("%d", &len);
  int squared = len*wid;
  int *waste = (int*)malloc(squared * sizeof(int));
  printf("Total area of Survey = %d meters\n", squared);
 
  for(i = 0; i < squared; i++){
    printf("Square Meter %d waste:", i);
    scanf("%d", &waste[i]);
  }
  //int sz = sizeof(waste) / sizeof(waste[0]);
  for(i = 0; i < squared; i++){
    //a = waste[i];
    average = average + waste[i];
    //int new = average/a;
  }
  printf("average per square meter %d", average/squared);
}
  
