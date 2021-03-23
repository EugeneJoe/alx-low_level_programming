#include "lists.h"

/**
 * reverse_recurse - reverse listint_t list recursively
 * @head: pointer to head node of listint_t linked list
 * @prev: pointer to temporarily store address of node
 *
 * Return: no return value (void)
 */
void reverse_recurse(listint_t **head, listint_t *prev)
{
	listint_t *next = NULL;

	if (prev->next == NULL)
	{
		*head = prev;
		return;
	}
	reverse_recurse(head, prev->next);
	next = prev->next;
	next->next = prev;
	prev->next = NULL;
}

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to head of listint_t linked list
 *
 * Return: pointer to first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	if (*head == NULL || head == NULL)
		return (NULL);
	prev = *head;
	reverse_recurse(head, prev);
	return (*head);
}
