#include "main.h"
/**
 * times_table - prints the times table from 0 to 9
 * Return: does not apply
 */
void times_table(void)
{
int a = 0, b;
while (a <= 9)
{
b = 0;
while (b <= 9)
{
write(a * b);
}
}
}
