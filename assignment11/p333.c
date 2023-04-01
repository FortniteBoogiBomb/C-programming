#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int* number;
    char* streetname;
    char* streetType;
} Address;
typedef struct {
    char* studentName;
    Address address;
} Student;

void get(Student *pp){
    printf("\nEnter Name:");
    pp->studentName = malloc(15 * sizeof(char));
    scanf("%s", pp->studentName);
    printf("enter address number:");
    pp->address.number = malloc(15 * sizeof(int));
    scanf("%d", pp->address.number);
    printf("enter street name:");
    pp->address.streetname  = malloc(15 * sizeof(char));
    scanf("%s", pp->address.streetname);
    printf("Enter street type:");
    pp->address.streetType = malloc(15 * sizeof(char));
    scanf("%s", pp->address.streetType);
}

void printP(Student *pp){
    printf("Name: %s", pp->studentName);
    printf("\nAddress %d", *pp->address.number);
    printf("\nStreet name: %s", pp->address.streetname);
    printf("\nStreet type %s", pp->address.streetType);
}

int main() {
    int n = 0;
    printf("\n /*How many student records you want to enter?*/") ;
    printf("\n\n Enter Limit : ") ;
    scanf("%d", &n) ;
    //Address *p = (Address*) malloc(25 * sizeof(Address));
    Student *pp = (Student*) malloc(25 * sizeof(Student));
    for(int i = 0; i < n; i++){
        printf ("\n Enter Student-%d Details", i + 1);
        printf ("\n --------------------------\n");
        get(&pp[i]);
    }
    for(int i = 0; i < n; i++){
        printf("\n");
        printP(&pp[i]);
    }
  
    
    free(pp);
    return 0;
}
