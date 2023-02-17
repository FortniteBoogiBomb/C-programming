#include <stdio.h>
#include <stdlib.h>
int students[5][4] = { 
        {1, 16, 11, 80}, 
        {2, 18, 10, 90}, 
        {3, 13, 11, 95}, 
        {4, 18, 12, 85}, 
        {5, 14, 9, 70} }; 
int studentId = 0;
int studentAge = 1;
int studentYear = 2;
int studentGrade = 3;

int main(){ 
   int minage, minyear, mingrade;
   printf("enter your minimum age\n");
   scanf("%d", &minage);
   printf("enter your minimum year\n");
   scanf("%d", &minyear);
   printf("enter your minimum grade\n");
   scanf("%d", &mingrade);
   int arr[5] = {1,1,1,1,1};
   for (int i = 0; i < 5; ++i){
      if( (students[i][studentAge] < minage) && (minage != -1) ){
         arr[i] = 0;
      }
      if( (students[i][studentYear] < minyear) && (minyear != -1) ){
         arr[i] = 0;
      }
      if( (students[i][studentGrade] < mingrade) && (mingrade != -1)){
         arr[i] = 0;
      }
   }
   printf("Students that match the given criteria\n"); 
   for (int i = 0; i < 5; ++i)
      if(arr[i] == 1){
         printf("%d\n", students[i][studentId]);
      }
      
}   

