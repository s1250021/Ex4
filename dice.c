#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int dice1, dice2;

  srand((unsigned int)time(NULL));
  
  printf("Rolling the dice...\n");
  dice1 = rand() % 6 + 1;
  dice2 = rand() % 6 + 1;

  printf("Dice 1: %d\n",dice1);
  printf("Dice 2: %d\n",dice2);

  printf("Total value: %d\n", dice1 + dice2);

  if(dice1 + dice2 > 7) printf("You won\n");
  else printf("You lost\n");

  return 0;
}
