#include <stdio.h>
#include <ctype.h>

/**
 * main- prints the alphabet in lowercase
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)

{
int ch;

for(int x = 'A'; x <= 'Z'; x++)
{
int lower_x = tolower(x);
putchar(lower_x);
}

return (0);
}
