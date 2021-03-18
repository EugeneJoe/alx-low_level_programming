#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to head of a linked list_t list
 *
 * Return: no return value (void)
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
