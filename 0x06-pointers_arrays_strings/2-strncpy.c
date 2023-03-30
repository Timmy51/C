#include "main.h"
/**
 * _strncpy - a function that concatenates strings
 * @dest: a pointer variable dest
 * @src: a pointer variable src
 * @n: an integer variable n
 * Return: a character.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while(i < n && src[i] != 0)
{dest[n] = src[i];
i++;
}
while (i < n)
dest[i] = 0;
return (dest);
}
