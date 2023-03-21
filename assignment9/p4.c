#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(char *str);
void print_reversed(char *str);

// Returns: 1 (true) if str is a palindrone, 0 (false) otherwise.
int is_palindrome(char *str) {
   int left = 0;
   int right = strlen(str) - 1;
   while(right > left){
      if(str[left++] != str[right--]){
         printf("%s: not a pal\n", str);
         return 0;
      }
   }
   printf("%s is a pal\n", str);
   return 1;
}
// Prints the string, str in reverse. Doesn't end in a newline.
void print_reversed(char *str) {
   int temp = 0;
   int len = strlen(str);
   int left = 0;
   int right = len - 1;
   for(int i = left; i < right; i++) {
      temp = str[i];
      str[i] = str[right];
      str[right] = temp;
      right--;
   }
   printf("reversed string:%s\n", str);
}
int main(int argc, char **argv) {
   char *str = argv[1]; // Get the 1st command line argument.
   
   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
   }
   is_palindrome(str);
   print_reversed(str);

 // Get the 1st command line argument.
// Check if str is a palindrone using is_palindrone here.
// Use print_reversed to print the string in reverse.
// Hint: If print doesn't end in a newline,
// subsequent prints will continue where the last print left off
// Use this to for the part of the print that says is/isn't a palindrome.
}
