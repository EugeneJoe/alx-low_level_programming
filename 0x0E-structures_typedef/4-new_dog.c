#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog using dog_t type
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: pointer to dog_t variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	mydog = malloc(sizeof(dog_t));
	if (mydog == 0)
	{
		free (mydog);
		return (0);
	}
	mydog->name = name;
	mydog->age = age;
	mydog->owner = owner;

	return (mydog);
}
