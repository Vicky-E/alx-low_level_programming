#include <stio.h>
#include "lists.h"
/**
 * listint_len - returns number of elememts in linked list
 * @h: pointer to list
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
