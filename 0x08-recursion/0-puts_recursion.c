#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: a pointer character
 */
void _puts_recursion(char *s)
{
int i = 1;
if (s[i] == 0)
{
_putchar('\n');
}
_putchar(s[i]);
i++;
}
