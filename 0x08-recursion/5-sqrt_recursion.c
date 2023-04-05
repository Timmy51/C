#include "main.h"
/**
 * _sqrt_recursion - finds the square root of a number
 * _actual_recursion - the function where recursion is used
 * @n: an integer variable n
 * @i: an integer parameter
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
/**
 * _actual_recursion - the function where recursion occurs
 * @n: an integer parameter
 * @i: an integer parameter
 * Return: the root
 */
int _actual_recursion(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (_actual_recursion(n, i + 1));
}
