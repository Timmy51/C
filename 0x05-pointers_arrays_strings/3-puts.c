#include "main.h"
#include <stdio.h>
/**
 * _puts - returns the length of string
 * @str: a pointer variable
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != 0)
_putchar(*str);
i++;
}
