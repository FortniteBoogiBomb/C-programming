#include <stdio.h>
#include <stdlib.h>
int datas[10];
int ascend[10];
int desend[10];
void ascendit();
void desendit();
int main(){ 
   printf("enter your array of elements (10 total integers)\n");
   for (int i = 0; i < 10; ++i)
      scanf("%d", &datas[i]);
   if( (sizeof(datas) > 40) || (sizeof(datas) < 40) ){
      printf("ERROR, incorrect number of elements.\n");
      exit(1);
   } 
   ascendit();
   desendit();
}

void ascendit(){
   for(int i = 0; i < 10; i++){
      for(int j = 0; j < i; j++){
         if(datas[j] > datas[i]){
            int temp = datas[i];
            datas[i] = datas[j];
            datas[j] = temp;
         }
      }
   }
   printf("Asending order: ");
   for(int i = 0; i < 10; i++){
      printf("%d ", datas[i]);
   }
   printf("\n");
}


void desendit(){
   for(int i = 0; i < 10; i++){
      for(int j = 0; j < i; j ++){
         if(datas[j] < datas[i]){
            int temp2 = datas[i];
            datas[i] = datas[j];
            datas[j] = temp2;
         }
      }
   }
   printf("Desending: ");
   for(int i = 0; i < 10; i++){
      printf("%d ", datas[i]);
   }
   printf("\n");
}
