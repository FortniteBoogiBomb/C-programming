#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//The game of choices, if u chose correct you live, if you dont u die
int enemiesSmited;//global variable
int yesOrNo(void);//function prototype
int stabOrNot(void);//function prototype
int kickTheKid(void);//function prototype
int yesOrNo(void){
   int y = 0;
   printf("yes or no\n");
   printf("select 1 for yes and 2 for no\n");
   scanf("%d", &y);
   if(y == 1){
      return 1;
   }
   if(y == 2){
      return 0;
   }
}
int stabOrNot(void){
   int s = 0;
   printf("will u stab?\n");
   printf("enter 1 to stab and 2 to not stab\n");
   scanf("%d", &s);
   if(s == 1){
      return 1;
   }
   if(s == 2){
      return 0;
   }
}
int kickTheKid(void){
   int kick = 0;
   scanf("%d", &kick);
   if(kick == 1){
      printf("you did't decide to kick the kid? thats lame.");
      printf("the kid kicks you becasue you were too weak to kick him first\n");
      printf("you lose points for getting beat up by a kid\n");
      enemiesSmited-=1;
   }
   if(kick == 2){
      printf("you totally kicked the kid and he totally got killed\n");
      printf("how do you feel about yourselfnow that you murdered a child in cold blood?\n");
      printf("\n\n\n");
      printf("you made the right choice though, I told you he was evil!\n");
      printf("you get 2 bonus points for killing the evil child!\n");
      enemiesSmited +=2;//bonus points added to global variable 
   }
}



int main (){
   int option1 = 0; 
   int option2 = 0;
   int dead = 0;
   int sdead = 0;
   int yn = 0;
   int stab = 0;
   printf("Hello Traveler and welcome to the game of chances\n");
   printf("Shortly you will be prompted with a question with two possible answers.\n");
   printf("The choice you make will decide your fate\n");
   printf("Which item will you chose to start with?\n");
   printf("Option 1: a vintage bowie knife (well used but always reliable)\n");
   printf("Option 2: a soccer ball (it can be played with)\n");
   printf("Press 1 for knife,  press 2 for soccer ball\n");
   scanf("%d", &option1);
   //scanf("%d", &option2);
   printf("you chose option: %d\n", option1);
   
   if(option1 == 1){
      printf("great, now you have a knife\n");
      printf("Now you have to chose the safe path or the scary path\n");
      printf("Which path will you chose today?\n");
      printf("Enter 1 for Scary path and Enter 2 for safe path\n");
      scanf("%d", &option2);
      if(option2 == 1){
         printf("You brought a knife to a gunfight... but you aren't dead yet! just really close.\n"); 
         printf("Now you must make the right choice\n");
         printf("you encounter a troll on a bridge, want to stab him?\n");
         stab = stabOrNot();
         if(stab == 1){
            enemiesSmited+=1;
            printf("hidden achievement unlocked: kill the troll with knife\n");
            printf("i can't believe that worked, you killed the troll!\n");
         }
         if(stab == 0){
            printf("your stealth allowed you to pass\n");
         }
         //add more functionality
         printf("Enter 1 to live and enter 2 to die\n");
         scanf("%d", &dead);
         if(dead == 1){
            printf("\n\n\n");
            printf("Number of enemies vanquished:%d\n", enemiesSmited);
            printf("you lose!!!!, wasn't that boring???\n");
         }
         if(dead == 2){
            printf("Are you sure you want to do that? You have so much to live for!\n");
            printf("Enter 1 if you really want to die and enter 2 if you changed your mind\n");
            scanf("%d", &sdead);
            if(sdead == 1){
               printf("...\n");
               sleep(100); 
               printf(".....\n");
               sleep(100);
               printf("You arise from your chamber, realizng that your entire reality was a lie.\n");
               printf("you come to the realization that you succesfully escaped the matrix\n");
               printf("congratulations, you won!\n");
            } 
         }
      }

   }
   if(option1 == 2){
      printf("wow, you chose the soccer ball...maybe you're smarter than you look\n");
      printf("how did you know to chose that? are you cheating?\n");
      yn = yesOrNo();
      if(yn == 1){
         printf("I knew it...Since you are smarter than me, you can continue on\n");
         printf("You encounter a child, you sense that he is 100 percent evil.\n");
         printf("Do you chose to (1) Play with the child using your item (soccer ball) or...");
         printf("(2) kick the soccer ball as hard as you can at the child???\n");
         printf("select 1 to play, select 2 to kick\n");
         kickTheKid();
      }
      if(yn == 2){
         printf("if you were smarter, you would cheat to win!\n");
         printf("YOU LOSE!!!!!!");
      }
   }
   




}
