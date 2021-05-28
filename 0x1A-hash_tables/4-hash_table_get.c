#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to be looked for in the hash table
 *
 * Return: value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
