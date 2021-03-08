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
	int lenname, lenowner, i;

	lenname = 0;
	while (*(name + lenname) != '\0')
		lenname++;
	lenowner = 0;
	while (owner[lenO] != '\0')
		lenO++;
	mydog = malloc(sizeof(dog_t));
	if (mydog == 0)
	{
		free(mydog);
		return (0);
	}

	mydog->name = malloc(lenname + 1);
	if (mydog->name == 0)
	{
		free(mydog->name);
		free(mydog);
		return (0);
	}

	mydog->owner = malloc(lenowner + 1);
	if (mydog->owner == 0)
	{
		free(mydog->owner);
		free(mydog->name);
		free(mydog);
		return (0);
	}
	for (i = 0; i <= lenname; i++)
		mydog->name[i] = name[i];
	for (i = 0; i <= lenowner; i++)
		mydog->owner[i] = owner[i];
	mydog->age = age;

	return (mydog);
}
