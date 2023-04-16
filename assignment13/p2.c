#include <stdio.h>
#include <stdlib.h>
int even(const int num);

int main(){
   FILE *f1, *f2, *f3;
   int num;
   int evencount = 0;
   int oddcount = 0;
   //printf("Contents of DATA file\n\n");
   f1 = fopen("DATA.txt", "r"); /* Create DATA file */
   if(f1 == NULL){
      printf("Error! file can't open");
      exit(1);
   }
f2 = fopen("ODD.txt", "w");
f3 = fopen("EVEN.txt", "w");
if(f2 == NULL){
   printf("Error! file can't open");
   exit(1);
}
if(f3 == NULL){
   printf("Error! file can't open");
   exit(1);
}
/* Read from DATA file */
//fprintf(f3, "File contains %d EVEN numbers\n", evencount);
//fprintf(f2, "file contains %d odd numbers\n", oddcount);

while(fscanf(f1, "%d", &num) != -1){
   if(even(num)){
      //fprintf(f3, "File contains EVEN numbers\n");
      fprintf(f3, "%d\n", num); 
      evencount+=1;
   }
   else {
      fprintf(f2, "%d\n", num);
      oddcount+=1;
   }
}  
   for(int i = 0; i < 1; i++){
      fprintf(f3, "\nFile contains %d EVEN numbers\n", evencount);
      fprintf(f2, "\nfile contains %d odd numbers\n", oddcount);
   }     
   return 0;
}


int even(const int num){
   return !(num & 1);
}





