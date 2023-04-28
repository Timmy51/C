#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints a linked lish
 * @h: a pointer to the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
printf("%d", h->n);
return (i);
}
