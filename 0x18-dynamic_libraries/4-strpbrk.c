#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes to search
 * Return: a pointer to the byte in s, NULL if no such byte
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
