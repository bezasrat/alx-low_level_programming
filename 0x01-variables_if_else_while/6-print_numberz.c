#include <stdio.h>

/**
 * main- prints all single digit base 10 numbers
 * Return: 0, if exited properly, non-zero if otherwise
 */

int main(void)

{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i);
}
putchar('\n');

return (0);
}
