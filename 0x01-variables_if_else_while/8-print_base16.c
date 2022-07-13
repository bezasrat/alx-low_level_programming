#include <stdio.h>

/**
 * main - Prints all numbers in base sixteen
 *
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
