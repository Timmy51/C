#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: an integer variable
 * Return: results
 */
int print_sign(int n)
{
int result;
if (n > 0)
{
_putchar('+1');
result = 1;
}
else
if (n < 0)
{
_putchar('-1');
result = -1;
}
else if (n == 0)
_putchar('0');
result = 0;
return (result);
}
