#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - frees a list_t list
 * @head: head of the linked list
 */
void free_list(list_t *head)
{
while (head)
{
free(head->str);
free(head->next);
}
free(head);
}
