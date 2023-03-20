#include <stdio.h>
/**
 * main - prints all letters of the alphabet except q and e
 * Return: Always 0 Success
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++)
/*if (i != 'q' && i != 'e')*/
putchar(i);
putchar('\n');
return (0);
}
