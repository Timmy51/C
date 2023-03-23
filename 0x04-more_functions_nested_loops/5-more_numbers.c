#include "main.h"
/**
 * more_numbers - a function that prints 10 lines
 */
void more_numbers(void)
{
int i = 0;
int j;

while (i < 10)
{
for (j = 0; j <= 14; j++)
{
_putchar(j + 48);
}
_putchar('\n');
i++;
}
}
