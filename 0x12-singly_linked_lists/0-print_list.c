#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints a linked list
 * @h: a pointer to the list
 * Return: a struct
 */

size_t print_list(const list_t *h)
{
unsigned int i = 0;
while (h)
{
if (list_t->str == NULL)
{
printf("[0] (nil)");
}
printf("[%lu] %s", list_t->len, list_t->str);
h = h->next
i++;
}
return (i);
}
