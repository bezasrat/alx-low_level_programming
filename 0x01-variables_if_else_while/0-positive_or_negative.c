#include <stdlib.h>
#include <time.h>
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
printf("%d", n, "is positive");
}

if (n == 0)
{
printf("%d", n, "is zero");
}

if (n < 0)
{
printf("%d", n, "is negative");
}

return (0);

}
