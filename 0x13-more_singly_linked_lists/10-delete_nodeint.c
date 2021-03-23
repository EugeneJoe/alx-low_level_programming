#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index 'index' of a listint_t
 * linked list
 * @head: double pointer to head of listint_t linked list
 * @index: position of node to delete in listint_t linked list
 *
 * Return: 1 if it succeeds, else -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;

	if (*head == NULL || head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	while (index > 0 && current)
	{
		prev = current;
		current = current->next;
		index--;
	}
	if (current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
