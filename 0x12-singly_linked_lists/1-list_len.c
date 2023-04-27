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
size_t i = 0;
while (h)
{
i++;
h = h->next;
}
return (i);
}
