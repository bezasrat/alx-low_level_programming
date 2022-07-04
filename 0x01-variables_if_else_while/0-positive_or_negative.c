#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* display a different random number everytime the program is launched */

/**
* main- prints the value of random numbers
* Return: 0 if exited properly, non-zero otherwise
*/

int main(void)

{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}

else if (n == 0)
{
printf("%d is zero\n", n);
}

else
{
printf("%d is negative\n", n);
}

return (0);

}
