#include "main.h"
/**
 * swap_int - swaps integers
 * @a: variable a
 * @b:variable b
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
