#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds all arguments to the program
 * @argc: argument count
 * @argv:argument vector
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc == 1)
{
printf("0\n");
}
for (i = 1; i < argc; i++)
{
if (!isdigit(argv[i]))
{
printf("Error\n")
return (1);
}
printf("%d\n", sum + atoi(argv[i]));
}
return (0);
}
