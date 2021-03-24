#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to head of listint_t linked list
 * @idx: index position to insert new node
 * @n: data for new node
 *
 * Return: Address of new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *previous, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	while (idx > 0 && current)
	{
		previous = current;
		current = current->next;
		idx--;
	}
	if (current == NULL)
	{
		free(new);
		previous = NULL;
		return (NULL);
	}
	new->next = current;
	previous->next = new;
	current = NULL;
	previous = NULL;
	return (new);
}
