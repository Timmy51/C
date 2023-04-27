#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - length of linked list
 * @h: a pointer to the list
 * Return: the length
 */

size_t list_len(const list_t *h)
{
size_t i = 0;
while (h)
{
i++;
h = h->next;
}
return (i);
}
