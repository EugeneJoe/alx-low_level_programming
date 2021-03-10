#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting point of program that prints the opcodes of main function
 * @argc: number of arguments to main
 * @argv: array of pointers to strings that are the arguments to main
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < (n - 1))
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
