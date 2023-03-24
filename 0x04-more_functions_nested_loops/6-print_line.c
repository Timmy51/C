#include "main.h"
/**
 * print_line - Afunction that draws a straight line
 * @n: the length of line
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
