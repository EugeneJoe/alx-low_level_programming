#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_list - perform a linear search on a linked list
 * @list: pointer to the first node to search from
 * @value: value to search for
 *
 * Return: pointer to the first node wher value is located, or NULL
 */
listint_t *linear_list(listint_t *list, int value)
{
	while (list != NULL)
	{
		if (list->n > value)
			break;
		printf("Value checked at index [%lu] = [%d]\n",
		       list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}

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
	listint_t *temp = list, *prev = NULL;

	if (list == NULL || size < 1)
		return (NULL);

	while (temp->n < value && temp->index < (size - 1))
	{
		prev = temp;
		temp = jump(prev, temp->index + root);
		printf("Value checked at index[%lu] = [%d]\n",
		       temp->index, temp->n);
		if (temp->next == NULL)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, temp->index);
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
