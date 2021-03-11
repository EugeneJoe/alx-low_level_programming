#include <stdarg.h>
#include <stdio.h>

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

	if (n == 0)
	{
		va_start(numlist, n);
		va_end(numlist);
		return;
	}
	if (separator == NULL)
		separator = "";

	va_start(numlist, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(numlist, int), separator);
	printf("%d\n", va_arg(numlist, int));

	va_end(numlist);
}
