#include <stdio.h>
// A simple representation of the date
typedef struct date {
    unsigned int d : 8;
    unsigned int m : 8;
    unsigned int y : 16;
}Date;
  
int main(){
    Date foo;
    unsigned tmp;
    int daysAdded;
    int num;
    int forMonth;
    printf("Please enter the month");
    scanf("%u", &tmp);
    foo.m = tmp;
    printf("Please enter day");
    scanf("%u", &tmp);
    foo.d = tmp;
    printf("pelase enter the year");
    scanf("%u", &tmp);
    foo.y = tmp;
    printf("Size of date is %lu bytes\n", sizeof(struct date));
    //struct date dt = { 31, 12, 2014 };
    printf("Date is %d/%d/%d", foo.m, foo.d, foo.y);
    printf("\n\nNow, enter number of days to add");
    //printf("How many days to add?");    
    scanf("%d", &daysAdded);
    int newDays = foo.d + 30*(foo.m-1) + daysAdded;//variable that stores number of days to add
    printf("%d", newDays);
    int newMonth =0;
    if(newDays>=360){
        foo.y += newDays/360;
        newDays = newDays % 360;
    }
    newMonth = newDays/30 + 1;//start at 1 when month increments 
    foo.m = newMonth;
    newDays = newDays -30*(foo.m - 1);
    foo.d = newDays;
    printf("Date is: %d/%d/%d", foo.m, foo.d, foo.y);

}
