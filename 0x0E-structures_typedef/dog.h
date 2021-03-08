#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure to hold information about a dog
 * @name: The name of the dog
 * @owner: The name of the dog's owner
 * @age: The dog's owner
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
