#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: variable for the character to be checked
 * Return: Always 0 success
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
