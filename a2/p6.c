#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
   int day = 0;
   int month = 0;
   int year = 0;
   int temp = 0;

   printf("Enter current Month\n");
   scanf("%d", &month);
   printf("Enter current Day\n");
   scanf("%d", &day);
   printf("Enter current year\n");
   scanf("%d", &year);
   printf("Enter your birth year\n");
   scanf("%d", &temp);

   if(temp < year){
      temp = year - temp; 
   }
   printf("Today is %d/%d/%d, and you are %d years old.\n", month,day,year, temp);


}
