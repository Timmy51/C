#include "funtion_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter
 * @size: size of the array
 * @action: is the function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array == NULL || action == NUlL)
{
return;
}
for (i = 0; i < size; i++)
action(array[i]);
}
