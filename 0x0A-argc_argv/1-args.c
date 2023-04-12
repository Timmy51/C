#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv:argument vector
 * Return: 0 Success
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
int i = argc - 1;
printf("%d\n", i);
return (0);
}
