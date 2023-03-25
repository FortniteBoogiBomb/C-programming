#include <stdio.h>
#include <stdlib.h>
int main(void){
  int *idPtr;
  int *score;
  int numberOfEmployees = 0;
  int n = 100;
  printf("Please enter number of Employees");
  scanf("%d", &numberOfEmployees);
  idPtr = (int*)calloc(n, sizeof(int));//calloc to score id
  score = (int*)calloc(n, sizeof(int));//calloc to store score
  int array[numberOfEmployees][2];//initializ 2d array to combine scores and id alloctaed space using #employees
  for (int i = 0; i < numberOfEmployees; i++){
    printf("Enter Employee ID 'space' Employee Score");
    for (int j = 0; j < 2; ++j){
      if(j <= 1){
         *idPtr = i;
         *score = j;
         scanf("%d", &array[*idPtr][*score]);//combine 2 calloced arrays into 1 2d array; 
      }
    }
  }
  printf("\n");
  printf("Employee ID     Employee Score\n");
  for (int i = 0; i < numberOfEmployees; i++){
    for (int j = 0; j < 2; j++){
      printf("%d              ", array[i][j]);//present the data in table form
    }
    printf("\n");//format specifiers not neccesary for presentation because I organized it in for loop
  }
  return 0;
}
