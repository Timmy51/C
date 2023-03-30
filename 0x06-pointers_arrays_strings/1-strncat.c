#include "main.h"
/**
 * _strncat - a function that concatenates strings
 * @dest: a pointer variable dest
 * @src: a pointer variable src
 * @n: an integer variable n
 * Return: a character.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != 0)
{
i++;
}
j = 0;
while (j < n && src[j] != 0)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = 0;
return (dest);
}
