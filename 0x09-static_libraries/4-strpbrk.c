#include "main.h"
/**
 * _strpbrk - a function that searche for a string for any of a set of bytes
 * @s: a pointer variable
 * @accept: a pointer variable
 * Return: an unsigned integer
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
return ('\0');
}
