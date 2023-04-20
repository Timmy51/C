#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all of its parameters
 * @n: a constant unsigned integer
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
unsigned int sum;
va_list args;
if (n == 0)
{
return (0);
}
va_start(args, n);
for (i = 0; i < n; i++)
{
sum += va_arg(args, unsigned int);
}
return (sum);
}
