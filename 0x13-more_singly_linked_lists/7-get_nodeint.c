#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: pointer to head of a listint_t linked list
 * @index: position of node to be returned in listint_t list
 *
 * Return: address of node at index 'index' or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	current = head;
	while (index > 0 && current)
	{
		current = current->next;
		index--;
	}
	if (current)
		return (current);
	else
		return (NULL);
}
