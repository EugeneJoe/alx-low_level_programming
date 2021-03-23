#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: double pointer to head of listint_t list
 *
 * Return: no return value (void)
 */
void free_listint2(listint_t **head)
{
	listint_t *h, *next;

	if (head == NULL)
		return;
	h = *head;
	while (h)
	{
		next = h->next;
		free(h);
		h = next;
	}
	*head = NULL;
}
