#include "main.h"
/**
 * _islower - checks for lowercase
 * Return: Result
 * parameter: integer
 * c: parameter
 */
int _islower(int c)
{
int result;
if (c >= 97 && c <= 122)
result = 1;
else
result = 0;
return (result);
}
