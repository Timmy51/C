#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: an integer vRiable
 * @max: an integer variable
 * Return: a pointer integer
 */
int *array_range(int min, int max)
{
int *ptr;
int i, j;
if (min > max)
{
return (NULL);
}
j = max - min + 1;
ptr = malloc(sizeof(int) * j);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++)
{
ptr[i] = min++;
}
return (ptr);
}
