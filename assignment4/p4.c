#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<time.h>
int turn = 0;
int temp = 0;
int roll2 = 0;
int diceRoll(void);
int getSum(int a, int b);
int checkCraps(int score, int turn);
int RandomInteger();

int main(){
   char roll;
   char foo;
   printf("please press r or R ro roll a dice\n");
   for(int j = 0; j < 2; j++){
      if(j == 1){
         printf("please press r again for second roll\n");
      }
      //read the documentation on this if it confuses you!
      system("/bin/stty raw");
      char m = getchar();
      while(m == '\n'){
         m = getchar();
      }
      system("/bin/stty cooked");
      if(m =='r' || m == 'R'){
         diceRoll();
      }
   }
}
/*
do{
   printf("please press r or R ro roll a dice\n");
   getchar();
   roll = getchar();
   if(roll=='r' || roll=='R')
      diceRoll();
   roll = getchar();
   if(roll == 'r' || roll == 'R')
      diceRoll();
   }
   while(roll == 'r' || roll == 'R');
system("pause");
return 0;
}
*/
int diceRoll(void){
   int roll;
   int die1, die2;
   die1 = RandomInteger();
   die2 = RandomInteger();
   roll = getSum(die1, die2);
   printf("you rolled a %d\n", roll);
   turn += 1;
   checkCraps(roll, turn);
   return(roll);
}

int getSum(int a, int b){
   return a + b;
}

int RandomInteger(){
   //srand(time(NULL)); 
   return rand()%(5)+1;
   //returni rand()%(5)+1;  
   //return 1;
}
int checkCraps(int score, int turn){
   if( turn == 1 ){
      if(score == 7 || score == 11){
         printf("score is:%d\n", score);
         printf("You win!\n");
         return;
      }
      else if(score==2 || score==3 || score==12){
         printf("score: %d\n", score);
         printf("You Lose\n");
         return;
      }
   }
   int points = score;
   printf("your points:%d\n", points);
   if (turn != 1) {
         //roll2 = diceRoll();
         printf("your total score is %d\n", roll2);
         if (roll2 == 7 || roll2 == 11){
            printf("you lose\n");
            return;
         }
         if(roll2 == score){
            printf("you win!");
            return;
         }
      }
      printf("loser\n");
}
    

      
   


