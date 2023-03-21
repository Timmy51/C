#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10x
 * Return: 0 Success
 */
void print_alphabet_x10(void)
{
int i = 0, j;
while (i < 10)
{
for (j = 97; j <= 122; j++)
_putchar(j);
_putchar('\n');
i++;
}
}
