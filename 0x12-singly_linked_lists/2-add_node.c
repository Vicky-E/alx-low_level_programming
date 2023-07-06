#include "lists.h"
#include <string.h>
/**
 * add_node - adds new node at start
 * @head: head
 * @str: elements
 * Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	int l;
	list_t *node;

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
	node->next = *head;
	*head = node;
	return(node);
}
