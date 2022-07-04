#include <stdio.h>

/**
 *main- prints all single digit numbers of base 10
 *return: 0 if exited properly, non-zero if otherwise
 */

int main(void)

{
int i;

for (i = 0; i <= 9; i++)
{
printf("%d", i);
}
putchar ('\n');

return (0);
}
