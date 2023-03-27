#include "main.h"
#include <stdio.h>
/**
 * _puts - returns the length of string
 * @str: a pointer variable
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != 0; i++)
_putchar(*str[i]);
}
