#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: an unsigned integer variable
 * @size: an unsigned integer variable
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(sizeof(nmemb) * sizeof(size));
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
