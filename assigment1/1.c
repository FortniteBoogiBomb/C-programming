#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
//C program that uses puts to output text to screen

int main() {
   
   char father[255];
   char son[255];

   strcpy(father, "Luke I am your father!!!!");
   strcpy(son, "NO NO NO NO, this can't be!!!!");

   puts(father);
   puts(son);
}
