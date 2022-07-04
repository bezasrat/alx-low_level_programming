#include <stdio.h>
#include <ctype.h>

/**
 * main- prints alphabets in lowercase and then uppercase
 * Return:0 if exited properly, non-zero if otherwise
 */

int main(void)

{
int ch;

for (ch = 'A'; ch <= 'Z'; ch++)
{
int lower_ch = tolower(ch);
putchar(lower_ch);
putchar(ch);
}
putchar('\n');

return (0);
}

