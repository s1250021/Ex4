#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int dice1, dice2;
  char name[100];
  
  srand((unsigned int)time(NULL));

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
  printf("Rolling the dice...\n");
  dice1 = rand() % 6 + 1;
  dice2 = rand() % 6 + 1;

  printf("Dice 1: %d\n",dice1);
  printf("Dice 2: %d\n",dice2);

  printf("Total value: %d\n", dice1 + dice2);

  return 0;
}
