#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: an unsigned integer variable
 * @c: a character variable
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
int n = size;
unsigned int i;
ptr = malloc(n * sizeof(char));
if (ptr == NULL)
{
_putchar(0);
return ("1");
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
if (size == 0)
{
return (NULL);
}
return (ptr);
free(ptr);
}
