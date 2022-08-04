#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: result of add
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - substract two numbers
 * @a: first num
 * @b: second num
 *
 * Return: result of sub
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplication of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: result of mul
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divides two int
 * @a: first num
 * @b: second num
 *
 * Return: result of div
 */
int op_div(int a, int b)
{
if (b == 0)
{printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - module of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: result of mod
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
