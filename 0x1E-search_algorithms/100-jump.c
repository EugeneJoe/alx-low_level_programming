#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using the
 *               Jump Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is found, else -1 of array is Null or value
 *         is not found in array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = 0, prev = 0, idx = 0, root = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[step] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += root;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	for (idx = prev; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
