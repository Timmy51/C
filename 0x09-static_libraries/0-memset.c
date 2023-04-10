#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: a pointer variable
 * @b: a character variable
 * @n: an unsugned integer
 * Return: a poimter to s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
