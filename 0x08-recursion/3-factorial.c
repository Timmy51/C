#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: an integer variable n
 * Return: the solution
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else if (n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
