#include <stdio.h>
#include <stdlib.h>
int main(void){
  int *idPtr;
  int *score;
  int n;
  idPtr = (int*)calloc(n, sizeof(int));
  score = (int*)calloc(n, sizeof(int));
  int numberOfEmployees = 0;
  printf("Please enter number of Employees");
  scanf("%d", &numberOfEmployees);
  int array[numberOfEmployees][2];
  for (int i = 0; i < numberOfEmployees; i++){
    printf("Enter Employee ID 'space' Employee Score");
    for (int j = 0; j < 2; ++j){
      if(j <= 1){
        scanf("%d", &array[i][j]);
      }
    }
  }
  printf("\n");
  printf("Employee ID     Employee Score\n");
  for (int i = 0; i < numberOfEmployees; i++){
    for (int j = 0; j < 2; j++){
      printf("%d              ", array[i][j]);
    }
    printf("\n");
  }
  return 0;
}
