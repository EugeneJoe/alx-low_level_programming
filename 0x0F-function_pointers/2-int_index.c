/**
 * int_index - Searches for an integer in an integer array
 * @array: pointer to the integer array
 * @size: size of the integer array
 * @cmp: pointer to a function that provides the search logic. The function
 * takes an integer as an argument and returns an integer
 *
 * Return: index of the first match in the array on success, -1 if there's no
 * match or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(*(array + index)) != 0)
			return (index);
	}
	return (-1);
}
