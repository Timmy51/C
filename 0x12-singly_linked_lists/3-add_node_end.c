#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node
 * @head: a pointer to a pointer
 * @str: a char pointer
 * Return: a pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t temp;
unsigned int i = 0;
while (str[i])
{
i++;
}
temp = malloc(sizeof(list_t));
if (!temp)
{
return (NULL);
}
temp->str = strdup(str);
temp->len = i;
temp->next = head;
return (*head);
}
