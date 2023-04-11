#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: apointer variable
 * @s2: a pointer variable
 * Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
int i, j;
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

while (s2[j] != '\0')
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
while (s2[j] != '\0')
{
s3[i] = s2[j];
i++, j++;
}
s3[i] = '\0';
return (s3);
}
