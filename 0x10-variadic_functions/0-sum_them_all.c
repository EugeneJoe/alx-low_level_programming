#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed. Isn't added to the sum
 *
 * Description: Takes a variable number of parameters of type int and finds
 * their sum and returns the result
 *
 * Return: sum of its parameters. if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list a_list;

	if (n == 0)
		return (0);
	va_start(a_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(a_list, int);

	va_end(a_list);
	return (sum);
}
