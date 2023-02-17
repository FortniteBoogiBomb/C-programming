#include <stdio.h>
#include <stdlib.h>
//int myFunc(int arr[], int x, int *p){i


//}
int doStuff(int datas[], int start, int end, char op);
int main(){
   int datas[10];
   int start, end;
   char op;
   int brain = -1;
   printf("enter your array of elements (10 total integers)\n");
   for (int i = 0; i < 10; ++i)
      scanf("%d", &datas[i]);
   if( (sizeof(datas) > 40) || (sizeof(datas) < 40) ){
      printf("ERROR, incorrect number of elements.\n");
      exit(1);
   }
   //printf("%ld\n", sizeof(datas));
   printf("enter start index(0-9)\n");
   scanf("%d", &start);
   printf("enter end index (0-9)\n");
   scanf("%d", &end);
  /* for(int j = 0; j<10; j++) {
      if(start == datas[j]){
         x = j;
      }  
      if( end == datas[j] ){
        y = j; 
      }
   }*/
   if(start > 9 || start < 0){
      printf("start index out of bounds\n");
      exit(1);
   }
   if(end > 9 || end < 0 || end == start){
      printf("end index out of bounds\n");
      exit(1);
   }

   //printf("index 1 = %d, index 2 = %d\n", x, y);
   printf("please select your method of operation (add or product\n");
   printf("enter '+', '*'\n");
   scanf("%c\n", &op);
   brain = doStuff(datas, start, end, op);
   printf("you reuslt is equal to %d\n", brain);
}
int doStuff(int datas[], int start, int end, char op){
   int pee = datas[start];
   for(int i = start+1; i <end+1; i++){      
      if((op = '+')){
         pee = pee + datas[i];
      }
      else if((op = '*')){
         pee = pee * datas[i];
      }
   }
   return pee;
}
