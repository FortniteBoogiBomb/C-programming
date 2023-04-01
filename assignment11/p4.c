#include <stdio.h>

union WeatherData{
    float temp;
    float humidity;
    float windSpeed;
    char windDirection[20];
}w;

int main(){
        int choice;
        printf("What type of Data do you wish to collect?");
        printf("\nSelect 1 for Temperature ");
        printf("\nSelect 2 for Humidity ");
        printf("\nSelect 3 for Wind Speed ");
        printf("\nSelect 4 for Wind Direction ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the Temperature: ");
                scanf("%f", &w.temp);
                printf("\nTemperature %.2f", w.temp);
                printf("\n");
                break;
            case 2:
                printf("Enter the Humidity: ");
                scanf("%f", &w.humidity);
                printf("\nHumidity: %.2f", w.humidity);
                printf("\n");
                break;
            case 3:
                printf("Enter the Wind Speed: ");
                scanf("%f", &w.windSpeed);
                printf("\nTemperature %.2f", w.windSpeed);
                printf("\n");
                break;
            case 4:
                printf("Enter the Wind Direction: ");
                scanf("%s", w.windDirection);
                printf("\nWind Direction %s", w.windDirection);
                printf("\n");
                break;
        }
    return 0;        
}
