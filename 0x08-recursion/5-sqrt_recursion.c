#include "main.h"
/**
 * _sqrt_recursion - finds the square root of a number
 * @n: an integer variable n
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1)
}
_actual_recursion(n, 0);
return (i);
}

int _actual_recursion(int n, int i)
{
int i;
if (i *i == n)
{
return (i);
return (_actual_recursion(n, i + 1));
}
if (i *i > n)
{
return (-1);
}
}
