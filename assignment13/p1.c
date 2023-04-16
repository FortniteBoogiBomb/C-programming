#include <stdio.h>

int main() {
   int len;
   char file[50];
   FILE *fp;
   printf("FILENAME: ");
   scanf("%[^\n]", file);
   fp = fopen(file, "r"); // 'r' opens the file in read mode
   printf("READING THE CONTENTS OF THE FILE [ %s ]\n", file);
   printf("Initial position of file poiner: %ld", ftell(fp));
  
   fseek(fp, 0, SEEK_END);
  
   len = ftell(fp);
   
  // int i;
   int a[5] = {0};
   
   for(int i = 0; i < len; i++){
      //fseek(fp, i, SEEK_CUR);//points to last number
      //len = ftell(fp);
      fseek(fp, i, SEEK_SET);
      switch(fgetc(fp)){
         case 'a':   
         case 'A':
            a[0]++;
            break;
         case 'e':
         case 'E':
            a[1]++;
            break;
         case 'i':
         case 'I':
            a[2]++;
            break;
         case 'o':     
         case 'O':
            a[3]++;
            break;
         case 'U':
         case 'u':
            a[4]++;
            break;
     }
   //printf("NUMBER OF VOWELS: %ls\n", a);         
   }
   printf("\n");
   printf("NUMBER OF A's: %d\n", a[0]);
   printf("NUMBER OF E's: %d\n", a[1]);
   printf("NUMBER OF I's: %d\n", a[2]);
   printf("NUMBER OF O's: %d\n", a[3]);
   printf("NUMBER OF U's: %d\n", a[4]);   
   fclose(fp);
   return 0;
}
