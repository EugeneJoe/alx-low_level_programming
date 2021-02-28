#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments passed to main
 * @argv: array of pointers to strings that are the arguments to main
 *
 * Return: Always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
