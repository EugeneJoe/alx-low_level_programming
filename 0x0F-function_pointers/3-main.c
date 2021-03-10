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
	int result = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = *argv[2];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
