#include <stdio.h>
// A simple representation of the date
typedef struct date {
    unsigned int r : 8;
    unsigned int b : 8;
    unsigned int g : 8;
}Date;
  
int main(){
    Date foo;
    unsigned tmp;
    int daysAdded;
    int num;
    int forMonth;
    printf("Please enter red value(0-255)");
    scanf("%u", &tmp);
    foo.r = tmp;
    printf("Please enter blue value(0-255)");
    scanf("%u", &tmp);
    foo.b = tmp;
    printf("pelase enter green value (0-255)");
    scanf("%u", &tmp);
    foo.g = tmp;
    //printf("Size of date is %lu bytes\n", sizeof(struct date));
    printf("#");
    printf("%02x", foo.r);
    printf("%02x", foo.b);
    printf("%02x", foo.g);
}

