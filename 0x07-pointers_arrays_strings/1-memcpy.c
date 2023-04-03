#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: a pointer variable
 * @src: a pointer variable
 * @n: an unsined integer 
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; n > 0; i++)
{
dest[i] = src[i]
n--;
}
return (dest)
}
