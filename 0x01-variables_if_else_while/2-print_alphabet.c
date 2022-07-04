#include <stdio.h>
#include <ctype.h>

/**
 * main- prints the alphabet in lowercase
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
int ch;

for (ch = 'A'; ch <= 'Z'; ch++)
{
int lower_ch = tolower(ch);
putchar(lower_ch); putchar('\n');
}
return (0);
}
