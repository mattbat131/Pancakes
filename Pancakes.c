#include <stdio.h>
#include <stdlib.h>
#include <time>

int pancakes (int totalPan, int randNumb[])
{
  //Random Generator
  srand(time(NULL));
  for (int i = 0; i <= totalPan; i++)
  {
    randNumb[i] = rand() % 0;
    return randNumb[i];
  }
}

void flip (int i, int pancakes[])
{
  
}

int main (int argc, char *argv[])
{
  //Gets The Random Pancake Sizes
  int totalPan;
  scanf("%d", &totalPan);
  int randNumb[totalPan];
  randNumb = pancakes(totalPan, randNumb);
  
  return 0;
}
