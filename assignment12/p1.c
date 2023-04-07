#include <stdio.h>
unsigned bin(unsigned n){
    unsigned i;
    for (i = 1 << 8; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}
 
int main(void){
    int num;
    unsigned ret = 0;
    printf("Enter an integer");
    scanf("%d", &num);
    ret = bin(num);
    printf("\n");
    printf("The number of bits set to 1 in %d is:", num);
    int count=0;
    while(num!=0){
        num = num&(num-1);
         count++;
    }
    printf(" %d", count);
}

