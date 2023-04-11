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
int n = 5;
ptr = malloc(n * sizeof(char));
ptr[0] = c;
if (size == 0)
{
return (NULL);
}
return (ptr);
}
