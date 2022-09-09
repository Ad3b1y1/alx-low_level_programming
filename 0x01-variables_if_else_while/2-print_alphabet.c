#include <stdio.h>

/**
 * main - Prints lowercase alphabet.
 *
 * Return: 0
 */
int main(void)
{
char alp[27] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 27; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
