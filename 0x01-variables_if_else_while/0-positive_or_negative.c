#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Discription: This prpgram will assign a random number to variable "n" each time it's executed
 * and when; 
 * n > 0 is positive
 * n = 0 is zero
 * n < 0 is negative 
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if (n > 0)
    printf("%i is positive\n", n);
  else if (n < 0)
    printf("%i is negative\n", n);
  else
    printf("%i is zero\n", n);

  return (0);
}
