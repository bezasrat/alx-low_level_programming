#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- prints the last digit of a random number
 * and whether it is greater than 5, is 0 or or less than 6
 * Return: 0 if exited properly, non-zero otherwise
*/

int main(void)

{

int n, lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

lastDigit = n % 10;

if ((n % 10) > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}

else if ((n % 10) == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}

else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}

return (0);

}
