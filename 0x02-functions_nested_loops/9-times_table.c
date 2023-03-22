#include "main.h"
/**
 * times_table - prints the times table from 0 to 9
 * Return: does not apply
 */
void times_table(void)
{
int a = 48, b;
while (a <= 57)
{
b = 48;
while (b <= 57)
{
_putchar((a * b) + 48);
b++;
_putchar('\n');
a++;
}
}
}
