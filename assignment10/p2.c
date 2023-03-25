#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
int main(void){
  int n = 0;
  int i = 0;
  //size_t j = 0;
  printf("Please enter number of words\n");
  scanf("%d", &n);
  char words[n][20];
  time_t t;
  //char *arr = malloc(sizeof (int) * n);
  //char* buff = malloc (sizeof (int) * n);
  char *random;
  for(i = 0; i < n; i++){
      //words[i] = malloc(n + 1);
      printf("Please enter word[%d]\n", i);
      scanf("%s", words[i]);
      //fgets(words[i], 20, stdin);
  }
  srand((unsigned) time(&t));
  for(i = 0; i < 10; i++){
    random = words[rand() % n];
    if(i == 0){
        random[0] = toupper(random[0]);
    }
    if(i!=(9)){
        printf("%s ", random);
    }
    else {
        printf("%s.\n", random);
    }
    random[0] = tolower(random[0]);
  }
}
