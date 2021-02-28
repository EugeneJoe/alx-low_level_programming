#include <stdio.h>
#include <stdlib.h>

/**
 * digitscheck - checks whether passed string contains only digits
 * @s: pointer to string to be checked
 *
 * Return: 0 if string only has digits, else 1
 */
int digitscheck(char *s)
{
	int check;

	while (*s)
	{
		if (*s < 48 || *s > 57)
		{
			check = 1;
			return (check);
		}
		else
		{
			check = 0;
		}
		s++;
	}
	return (check);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments passed to main
 * @argv: array of pointers to strings that are the arguments to main
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int check, args, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (args = 1; args < argc; args++)
	{
		check = digitscheck(argv[args]);
		if (check == 1)
		{
			printf("Error\n");
			return (1);
		}
	}

	for (args = 1; args < argc; args++)
	{
		sum += atoi(argv[args]);
	}
	printf("%d\n", sum);
	return (0);
}
