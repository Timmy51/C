#include "main.h"
/**
 * print_most_numbers - prints 0 to 9 without 2 and 4
 * @c: variable for the character to be checked
 * Return: Always 0 success
 */

void print_most_numbers(void)
{
int c;
for (c = 48; c < 58; c++)
if (c != 49 && c != 51)
_putchar(c + 48);
_putchar('\n');
}
