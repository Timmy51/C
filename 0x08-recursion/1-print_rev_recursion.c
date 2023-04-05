#include "main.h"
/**
 * _print_rev_recursion - prints a string followed by a new line
 * @s: a pointer character
 */
void _print_rev_recursion(char *s)
{
int i = 0;
i++;
if (s[i] != 0)
{
_putchar(s[i]);
_print_rev_recursion(s - 1);
}
}
