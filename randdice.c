#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
 int die1,die2,total;
srand(time(NULL));
  printf("What is your name?\n> ");
   scanf("%s",name);
  printf("Hello, %s!\n",name);

  printf("Rolling the dice...\n");
  die1=rand()%6+1;
  die2=rand()%6+1;
  printf("Die 1: %d\n",die1);
  printf("Die 2: %d\n",die2);

  total=die1+die2;
  printf("Total value: %d\n",total);
 
    return 0;
}
