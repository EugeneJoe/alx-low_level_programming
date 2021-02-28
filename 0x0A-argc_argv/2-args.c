#include <stdio.h>
#include "holberton.h"

/**
 * main - prints all the arguments it receives
 * @argc: number of arguments passed to main
 * @argv: array of pointers to strings that are the arguments to main
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int count;

	for (count = 1; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
