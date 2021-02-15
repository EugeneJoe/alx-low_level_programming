#include <stdio.h>

/**
 * print_array - prints n elements of array a of integers
 * @a: array containing integers to be printed
 * @n: number of elements to print
 * Return: no return value
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n - 1))
			printf("%d, ", *(a + x));
		else
			printf("%d", *(a + x));
	}
	printf("\n");
}
