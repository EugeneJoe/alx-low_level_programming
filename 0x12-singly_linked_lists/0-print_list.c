#include "lists.h"

/**
 * print_list - prints all the elements of a list list_t.
 * @h: pointer to head of the linked list list_t.
 *
 * Return: number of nodes in list_t
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
