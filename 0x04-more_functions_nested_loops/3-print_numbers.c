#include "main.h"
/**
 * print_numbers - prints 0 to 9
 * @c: variable for the character to be checked
 * Return: Always 0 success
 */

void print_numbers(void)
{
int c;
for (c = 48; c < 58; c++) 
_putchar(c + 48);
_putchar('\n');
}
