#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float usd;
    float euro;
    float lbs;
}Price;

int main(){
    printf("Please enter price of the product:");
    float price = 0;
    scanf("%f", &price);
    Price *p = (Price*) malloc(25 * sizeof(Price));
    if (p == NULL) {
        printf("Error allocating memory\n");
        return 1;
    } 
    int choice = 0;
    printf("\nPlease enter the currecny (USD, EURO, GBP):");
    printf("1 for USD, 2 for EURO, 3 for GBP");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            //printf("Price in USD %.2f ", price);
            p->usd = price;
            printf("Price in USD %.2f", p->usd);
            //printf("\nPrice in EURO %.2f ", price*.92);
            p->euro = price*.92;
            printf("\nPrice in Euro %.2f", p->euro);
            //printf("\nPrice in GBP %.2f", price *.81);
            p->lbs = price*.81;
            printf("\nPrice in LBS %.2f", p->lbs);
            break;
        case 2:
            //printf("Price in USD %.2f ", price*.91);
            p->usd = price*.91;
            printf("Price in USD %.2f", p->usd);
            //printf("\nPrice in EURO %.2f ", price);
            p->euro = price;
            printf("\nPrice in Euro %.2f", p->euro);
            p->lbs = price*.81;
            printf("\nPrice in lbs %.2f", p->lbs);
            //printf("\nPrice in GBP %.2f", price*.81);
            break;
        case 3:
            //printf("Price in USD %.2f ", price*.81);
            p->usd = price*.81;
            printf("Price in USD %.2f", p->usd);
            //printf("\nPrice in EURO %.2f ", price*.91);
            p->euro = price*.91;
            printf("\nPrice in Euro %.2f", p->euro);
            //printf("\nPrice in GBP %.2f", price);
            p->lbs = price;
            printf("\nPrice in LBS %.2f", p->lbs);
            break;
    }
    printf("\n");
    return 0;
}
