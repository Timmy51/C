#include "main.h"
/**
 * print_diagsums - prints the sums of the diagonals of a square matrix
 * @a: a pointer variable a
 * @size: an integer variable
 */
void print_diagsums(int *a, int size)
{
int sum1, sum2, y;

i = 0;
j = 0;
for (y = 0; y < size; y++)
{
i = i + a[y * size + y];
}
for (y = size - 1; y >= 0; y--)
{
j += a[y * size + (size - y - 1)];
}
printf("%d, %d\n", i, j);
}
