#include "lists.h"
#include <stdio.h>
/**
 * free_listint - frees list_int
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		*head = NULL;
	}
}
