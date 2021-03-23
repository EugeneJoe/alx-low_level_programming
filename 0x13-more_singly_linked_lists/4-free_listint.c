#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of listint_t list
 *
 * Return: no return value (void)
 */
void free_listint(listint_t *head)
{
	listint_t *next, *temp;

	temp = head;
	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
