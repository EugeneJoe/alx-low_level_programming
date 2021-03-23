#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: double pointer to head of listint_t list
 * @n: integer value
 *
 * Return: address of new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}
