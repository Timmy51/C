#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv:argument vector
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s", argv[0]);
return (0);
}

