#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a specified index
 * @head: double pointer to head of dlistint_t linked list
 * @index: positionof node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *temp;

	temp = *head;
	if (*head == NULL || !head)
		return (-1);
	if (index == 0 && temp->next)
	{
		printf("Here\n");
		temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}
	if (index == 0 && temp)
	{
		free(temp);
		*head = NULL;
		return (1);
	}
	while (idx < index)
	{
		temp = temp->next;
		idx++;
		if (temp == NULL)
			return (-1);
	}
	if (temp->next && temp->prev)
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}
	return (-1);
}
