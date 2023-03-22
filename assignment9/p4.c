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
   while(right > left){//loop thru string from first element to last (gcc reads strings from right-left
      if(str[left++] != str[right--]){
         printf("%s: not a pal\n", str);//if string id not read the same backwards, return from function
         return 0;
      }
   }
   printf("%s is a pal\n", str);//else, string is a palindrome, return palindrome
   return 1;
}
// Prints the string, str in reverse. Doesn't end in a newline.
void print_reversed(char *str) {
   int temp = 0;//temp variable to mainpulate string 
   int len = strlen(str);//find len
   int left = 0;
   int right = len - 1;
   for(int i = left; i < right; i++) {//loop through string backwards (left to right till length)
      temp = str[i];//set temp to strings current index 
      str[i] = str[right];//string index set to string[length=index] 
      str[right] = temp;//extract index from temp
      right--;//decrement at end of loop so entire string is evaluated 
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
