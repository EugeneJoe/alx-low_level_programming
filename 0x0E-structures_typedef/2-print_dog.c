#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the contents of a struct dog
 * @d: pointer to the struct to be printed
 *
 * Return: no return value
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %1.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		exit (98);
	}
}
