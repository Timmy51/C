#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: a pointer variable
 * Return: an integer
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != 0)
i++;
return (i);
}
