#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: an integer variable
 * Return: results
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
result = 1;
}
else
if (n < 0)
{
_putchar(45);
result = -1;
}
else
{
_putchar(48);
result = 0;
}
_putchar('\n');
}
