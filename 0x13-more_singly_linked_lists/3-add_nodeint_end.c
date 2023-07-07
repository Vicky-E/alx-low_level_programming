#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - adds node at end
 * @head: first
 * @n: value
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tail;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = node;
	}
	return (*head);
}
