#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - carries out a mathematical operation on 2 integers and prints result
 * @argc: number of arguments to main
 * @argv: array of pointers to strings that are the arguments to main
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
