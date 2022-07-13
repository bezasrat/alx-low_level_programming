#include <stdio.h>

/**
 * main- prints the alphabet in lowercase in reverse order
 *
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
int i;

for (i = 122; i > 96; i--)
{
putchar (i);
}
putchar('\n');

return (0);
}
