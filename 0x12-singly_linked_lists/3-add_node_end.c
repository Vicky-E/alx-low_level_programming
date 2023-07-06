#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds node at end
 * @head: first
 * @str: value
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int l;
	list_t *node, *tail;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL)
	{
		free(node);
		return (NULL);
	}
	for (l = 0; str[l];)
		l++;
	node->str = s;
	node->len = l;
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
