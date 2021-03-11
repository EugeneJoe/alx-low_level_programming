#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings separated by separator, followed by new line
 * @separator: separator to be printed between strings
 * @n: number of strings passed to function
 *
 * Description: This function takes a variable number of parameters that are
 * all strings.
 *
 * Return: no return value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list stringlist;

	if (n == 0)
		return;
	va_start(stringlist, n);
	if (separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
		{
			string = va_arg(stringlist, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s%s", string, separator);
		}
	printf("%s\n", va_arg(stringlist, char *));
	}
	if (separator == NULL)
	{
		for (i = 0; i < n - 1; i++)
		{
			string = va_arg(stringlist, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s", string);
		}
	printf("%s\n", va_arg(stringlist, char *));
	}

	va_end(stringlist);
}
