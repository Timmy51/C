#include "main.h"
/**
 * _strlen_recursion - a function that couts the length of string
 * @s: a pointer variable
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
int i;
i = 0;
if (*s != 0)
{
i++;
_strlen_recursion(s + 1);
}
return (i);
}
