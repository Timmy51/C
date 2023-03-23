#include "main.h"
/**
 * _isdigit - checks for uppercase character
 * @c: variable for the character to be checked
 * Return: Always 0 success
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
