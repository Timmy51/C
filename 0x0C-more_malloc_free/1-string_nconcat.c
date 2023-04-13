#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: a string variable
 * @s2: a string variable
 * @n: an unsigned integer variable
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *s3;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

i = j = 0;
while (s1[i] != '\0')
i++;

while (s2[j] != '\0' && j <= n)
j++;

s3 = malloc(sizeof(char) * (i + j + 1));
if (s3 == NULL)
{
return (NULL);
}
i = j = 0;
while (s1[i] != '\0')
{
s3[i] = s1[i];
i++;
}
return (s3);
}
