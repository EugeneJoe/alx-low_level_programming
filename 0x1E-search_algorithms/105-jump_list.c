#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump - jump forward in a list until the index matches a desired
 * index, or the last node in the list
 * @list: list to move forward
 * @index: desired index
 *
 * Return: node with desired index, or last node in the list
 */
listint_t *jump(listint_t *list, size_t index)
{
	while (list->next != NULL && list->index < index)
		list = list->next;
	return (list);
}

/**
 * jump_list - Searches for a value in a sorted linked list of integers using
 *             the Jump Search Algorithm
 * @list: pointer to the head of the linked list to search in
 * @size: number of nodes in the linked list
 * @value: Value to search for
 *
 * Return: pointer to the first node where value is lovated, else NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t root = sqrt(size);
	listint_t *temp, *prev;

	if (list == NULL || size < 1)
		return (NULL);

	prev = list;
	temp = jump(prev, root);
	printf("Value checked at index[%lu] = [%d]\n",
	       temp->index, temp->n);
	while (temp->n < value && temp->index < (size - 1))
	{
		prev = temp;
		temp = jump(prev, temp->index + root);
		printf("Value checked at index[%lu] = [%d]\n",
		       temp->index, temp->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, temp->index);
	printf("Value checked at index [%lu] = [%d]\n",
	       prev->index, prev->n);
	while (prev->index < (size - 1) && prev->n < value)
	{
		prev = prev->next;
		if (prev == NULL)
			return (NULL);
		printf("Value checked at index [%lu] = [%d]\n",
		       prev->index, prev->n);
	}
	if (prev->n == value)
		return (prev);

	return (NULL);
}
