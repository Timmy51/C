#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints numbers
 * @separator: a string parameter
 * @n: number of integers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *value;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
value = va_arg(args, char *);
if (value == NULL)
{
value = "nil";
}
printf("%s", value);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
