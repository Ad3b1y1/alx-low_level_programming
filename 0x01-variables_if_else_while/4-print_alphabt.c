#include <stdio.h>
/**
 * main - main block
 * Description: print all letters excluding 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
char i = 'a';

while (i <= 'z')
{
if (i != 'q' && i != 'e')
putchar(i);
i++;
}
putchar('\n');

return (0);
}
