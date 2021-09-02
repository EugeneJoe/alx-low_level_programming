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
		printf("Value checked at index [%lu] = [%d]\n",
		       list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
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
	size_t root = sqrt(size), step = 0, idx = 0;
	listint_t *temp = list, *prev = NULL;

	if (list == NULL)
		return (NULL);

	for (step = 0; step < size; step += root)
	{
		if (temp->n < value)
		{
			prev = temp;
			for (idx = 0; idx < root && temp->next != NULL; idx++)
				temp = temp->next;
			printf("Value checked at index[%lu] = [%d]\n",
			       temp->index, temp->n);
			if (temp->next == NULL)
			{
				break;
			}
		}
		else if (temp->n > value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       prev->index, temp->index);
			return (linear_list(prev, value));

		}
		else
		{
			return (temp);
		}
	}
	if (temp->n == value)
		return (temp);
	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, temp->index);
	return (linear_list(prev, value));
}
