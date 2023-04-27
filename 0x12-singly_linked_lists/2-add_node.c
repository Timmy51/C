#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds a new node
 * @head: a pointer to a pointer
 * @str: a char pointer
 * Return: a pointer
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int i = 0;
while (str[i])
{
i++;
}
new = malloc(sizeof(list_t));
if (!new)
{
return (NULL);
}

new->str = strdup(str);
new->len = i;
new->next = *head;
(*head) = new;
return (*head);
}
