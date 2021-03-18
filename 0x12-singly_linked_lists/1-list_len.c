#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to linked list
 *
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
