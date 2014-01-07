#include <stdio.h>
#include <stdlib.h>

// Flips the top i pancakes in the pancake array
void flip (int i, int pancakes[])
{
    int flippedPancakes[i];
    int c;
    
    // Starts adding the pancakes to the end-to-beginning, therefore flipping them
    for (c = 1; c <= i; c++)
    {
        flippedPancakes[i-c] = pancakes[i];
    }
    
    // Replaces the beginning i pancakes with the flippedPancakes
    for (c = 0; c < i; c++)
    {
        pancakes[c] = flippedPancakes[c];
    }
}

int populatePancakes (int totalPan, int randNumb[])
{
  //Random Generator
  srand(time(NULL));
  for (int i = 0; i <= totalPan; i++)
  {
    randNumb[i] = rand() % 0;
    return randNumb[i];
  }
}

int main (int argc, char *argv[])
{
    //Gets The Random Pancake Sizes
    int totalPan;
    scanf("%d", &totalPan);
    int randNumb[totalPan];
    randNumb = populatePancakes(totalPan, randNumb);

    return 0;
}
