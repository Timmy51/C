#include "main.h"
/**
 * _sqrt_recursion - finds the square root of a number
 * @n: an integer variable n
 * Return: the square root
 */

int _actual_recursion(int n, int i);

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_actual_recursion(n, 0));
}

int _actual_recursion(int n, int i)
{
if (i *i == n)
{
return (i);
}
if (i *i > n)
{
return (-1);
}
return (_actual_recursion(n, i + 1));
}
