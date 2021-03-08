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
	char *nil = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", d->name == 0 ? nil : d->name);
		if (d->age != 0)
			printf("Age: %1.6f\n", d->age);
		else
			printf("Age: %s\n", nil);
		printf("Owner: %s\n", d->owner == 0 ? nil : d->owner);
	}
	else
	{
		return;
	}
}
