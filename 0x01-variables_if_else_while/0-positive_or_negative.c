#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - main block
 * Discription: This program assigns a random number each time it's executed
 * and when:
 * n > 0 is positive
 * n = 0 is zero
 * n < 0 is negative
 * Return: 0
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
