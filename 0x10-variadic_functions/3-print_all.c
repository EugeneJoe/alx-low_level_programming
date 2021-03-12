#include <stdarg.h>
#include <stdio.h>

/**
 * _strlen - finds the length of as string passed to it
 * @s: string whose length is to be found
 * Return: length of the string
 */
int _strlen(const char * const s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	return (x);
}

/**
 * print_all - prints anything
 * @format: list of the types of arguments passed to the function
 *
 * Description: Takes in variable number and type of arguments. Format is a
 * string that contains format specifiers for the arguments passed to the
 * function.
 * c - char, i - integer, f - float, s - char*(string)
 * If a NULL string is passed, print '(nil)' instead.
 *
 * Return: no return value
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i, num, len;
	char c;
	double d;
	char *s;

	len = _strlen(format);
	va_start(list, format);
	i = 0;
	while (i < len)
	{
		switch (format[i])
		{
		case 'c':
			c = va_arg(list, int);
			printf("%c", c);
			break;
		case 'i':
			num = va_arg(list, int);
			printf("%d", num);
			break;
		case 'f':
			d = va_arg(list, double);
			printf("%f", d);
			break;
		case 's':
			s = va_arg(list, char *);
			if (s != NULL)
				printf("%s", s);
			break;
		default:
			continue;
		}
		if (i < len - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
