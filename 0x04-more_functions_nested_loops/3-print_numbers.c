#include "main.h"
/**
 * print_numbers - prints 0 to 9
 * @c: variable for the character to be checked
 * Return: void
 */

void print_numbers(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
_putchar (c);
}
_putchar ('\n');
}
