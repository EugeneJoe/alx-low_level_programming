#include <stdio.h>

/**
 * array_iterator - Executes another function given as a parameter on the
 * elements of an integer array
 * @array: pointer to integer array
 * @size: size of the integer array
 * @action: pointer to a function to be executed on the array. It takes an
 * integer as an argument and doesn't return anything.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	for (index = 0; index < size; index++)
		(*action)(*(array + index));
}
