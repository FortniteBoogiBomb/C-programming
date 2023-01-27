#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
char op;
float monthly;
float weekly;
char month = 30;
char weekInMonth = 4;
int workingDays = 20;
int workingHours = 40;
int staffOvertime;
int salesOvertime;
int productsSold;
int hours;
int hourly;
float final;
float calculatedSalary;
float calculatedOvertime;
float calculatedHourly;
int hourlyOvertime;
float totalTax;
char vacation;
int vacationPay;
char married;
int bonus;
int temp;
int extraHours;
printf("Enter the Employee type");
scanf("%c",&op);
switch(op){
   case 'A':
      printf("What is your Monthly Salary?\n");
      scanf("%f", &monthly);
      final = monthly * 12;
      //printf("Calculated Salary:%f\n", final);
   break;
   case 'S':
      printf("What is your monthly salary?\n");
      scanf("%f", &monthly);
      printf("how many overtime hours do you work each month (must be under 10)?\n");
      scanf("%d", &staffOvertime);
      if(staffOvertime <= 10){
         extraHours = staffOvertime;
      }
      else if( staffOvertime > 10){
         extraHours = 10;
      }
      calculatedHourly = (monthly)/160;
      calculatedOvertime = extraHours*(1.5*calculatedHourly);
      final = calculatedOvertime + monthly;
     // printf("Calculated Salary:%f\n", final);
   break;
   case 'E':
      printf("What is your Monthly Salary?\n");
      scanf("%f", &monthly);
      calculatedSalary = monthly * 12;
      printf("how many overtime hours do you work each day (1 hour max per day?)\n");
      scanf("%d", &staffOvertime);
      printf("Did youtake a vacation this year?(Y/N)\n");
      scanf("%c", &vacation);
      if(staffOvertime <= 20){
         extraHours = staffOvertime;
      }
      extraHours = 20;
      calculatedHourly = (monthly)/160;
      calculatedOvertime = extraHours*(1.35*calculatedHourly);
      temp = calculatedOvertime + monthly;
      if(vacation == 'y' || vacation == 'Y'){
         vacationPay = (monthly*11) + monthly/2;
      }
      printf("How many products are sold in a year\n");
      scanf("%d", &productsSold);  
      if(productsSold > 1){
         bonus=productsSold+600;
      }
      final = bonus + vacationPay + temp;
      //printf("Final pay b4 tax:%f\n", final);
   break;
   case 'P':
      printf("What is your Weekly salary?\n");
      scanf("%f", &weekly);
      printf("how many overtime hours do you work each week? (must be under 10)\n");
      scanf("%d", &hourlyOvertime);
      if(hourlyOvertime <= 40){
         extraHours = staffOvertime;
      }
      extraHours = 40;
      calculatedHourly = (weekly)/40;
      calculatedOvertime = extraHours*calculatedHourly;
      printf("How many products are sold in a year\n");
      scanf("%d", &productsSold);
      if(productsSold > 1){
         bonus+=productsSold+600;
      }
      else if(productsSold > 1){
         bonus=productsSold+600;
      }
      temp = (weekly*4*12);
      final = temp + bonus + calculatedOvertime;
      //printf("calcualted hourly employee salary:%f", final);
   break;
   case 'H':
      printf("Whats your hourly salary\n");
      scanf("%d", &hourly);
      printf("How many hours do youwork each week?(max 10)\n");
      scanf("%d", &hours);
      temp = hourly*hours;
      printf("how many overtime hours do you work each week? (must be under 10)\n");
      scanf("%d", &hourlyOvertime);
      if(hourlyOvertime <= 10){
         extraHours = hourlyOvertime; 
      }
      else(hourlyOvertime = 10);
      
      final = temp * hourlyOvertime;
      //printf("calculated hourly salary%f\n", final);
   break;
}
   printf("are you married(Y/N)?:\n");
   scanf(" %c", &married);
   if( married == 'y' || married == 'Y' ){
      if(final > 32000){
         totalTax = final*.25;
      }
      else(final < 32000);
         totalTax = final*.10;
   }
   else( married == 'n' || married == 'N');
      if(final > 64000){
         totalTax = final*.25;
      }
      else(final < 64000);
         totalTax = final*.10;
   printf("Calculated Salary before Tax:%.2f\n", final);
   printf("Calculated Salary after tax = %.2f\n", (final-totalTax));
}

