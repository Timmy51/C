#include <stdio.h>
/**
 * main - prints 1 to 100 whilst replacing multiples of 3 and 5 with FizzBuzz
 * Return: (0)
 */
int main(void)
{
int n = 1;
while (n < 101)
{
if (n % 3 == 0)
printf("Fizz");
else if (n % 5 == 0)
printf("Buzz");
else if (n % 15 == 0)
printf("FizzBuzz");
else
printf("%d", n);

printf(" ");
n++;
}
return (0);
}
