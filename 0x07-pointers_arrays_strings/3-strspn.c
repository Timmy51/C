#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: a pointer variable
 * @accept: a pointer variable
 * Return: an unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int j;
while (*s)
{
for (j = 0; accept[j] >= 0; j++)
{
if (*s == accept[j])
{
i++;
break;
}
else if (accept[j + 1] == 0)
return (0);
}
s++;
}
return (i);
}
