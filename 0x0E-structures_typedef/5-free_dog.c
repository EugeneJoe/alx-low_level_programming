#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog variable that was dynamically created
 * @d: pointer to dog variable to be freed
 *
 * Return: no retunr value (void)
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
	{
		return;
	}
}
