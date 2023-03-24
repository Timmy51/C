#include "main.h"
/**
 * print_square - Afunction that draws boxes
 * @size: the length of line
 * Return: void
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{int i;
for (i = 1; i <= size; i++)
{
_putchar('#');
}
}
_putchar('\n');
}
