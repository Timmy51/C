#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: a character variable
 * Return: char
 */
char *_strdup(char *str)
{
char i;
char *str2;
for (i = 0; str2[i] != '\0'; i++)
{	
str2[i] = str[i];
}
str2 = malloc(sizeof(char) * 7);
if (str == NULL || str2 == NULL)
{
return (NULL);
}
free(str2);
return (str2);
}
