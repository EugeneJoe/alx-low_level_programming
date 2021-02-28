#include <stdio.h>
#include "holberton.h"

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: number of arguments passed to main
 * @argv: array of pointers to strings that are the arguments to main.
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
