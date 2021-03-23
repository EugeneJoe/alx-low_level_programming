#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node's data(n).
 * @head: double pointer to the head of a listint_t linked list.
 *
 * Return: integer value (n) or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int nn = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	nn = temp->n;
	*head = temp->next;
	free(temp);
	temp = NULL;
	return (nn);
}
