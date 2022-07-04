#include <stdio.h>
#include <ctype.h>

/**
 * main- prints the alphabet in lowercase in reverse order
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)

{

int ch;
char lower_ch;
char reverse[lower_ch];

for (ch = 'A'; ch <= 'Z'; ch++)

{
int lower_ch = tolower(ch);
putchar(reverse[lower_ch]);
}
putchar('\n');

return (0);
}
