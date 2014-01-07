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

int main (int argc, char *argv[])
{
  return 0;
}
