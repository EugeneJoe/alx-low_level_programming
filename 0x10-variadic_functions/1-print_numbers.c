#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers separated by separator, followed by new line
 * @separator: separator to be printed between the numbers
 * @n: number of numbers to be printed
 *
 * Description: Takes in a variable number of parameters that are the numbers
 * to be printed.
 *
 * Return: no return value (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numlist;

	va_start(numlist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numlist, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numlist);
}
