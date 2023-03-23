#include "main.h"
/**
 * print_line - Afunction that draws a straight line
 * @n: the length of line
 */
void print_line(int n)
{
n = 0;
if (n < 0)
{
_putchar('\n');
}
else if (n > 0)
{
_putchar('_');
_putchar('\n');
}
n++;
}
