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
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
