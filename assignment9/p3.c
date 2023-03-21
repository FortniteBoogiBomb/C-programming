#include <stdio.h>
#include <stdlib.h>   
int my_strlen(char *str) {
   unsigned int count = 0;
   while(*str!='\0'){
      count++;
      str++;
   }
   //printf("Your length is: %d\n", count);
   return count;
   printf("Your length is: %d\n", count);
}
int main(int argc, char **argv) {
   int count = 0;
   char *str = argv[1]; // Get the 1st command line argument.
   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
   }
   count = my_strlen(str);
   //
   printf("\"%s\" is %d\n", argv[1], count);
   //
   return(0);
}
