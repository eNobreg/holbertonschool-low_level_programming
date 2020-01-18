#include "hash_tables.h"
/**
 * hash_table_get - Gets an entry from the hash table
 * @ht: The hash table
 * @key: The key to look for a value at
 * Return: The value or NULL if it failed
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = hash_djb2((unsigned char *) key) % ht->size;
	if (ht->array[index])
	{
		new = ht->array[index];
		while (new)
		{
			if (strcmp(new->key, key) == 0)
				break;
			new = new->next;
		}
	}
	else
		return (NULL);
	return (new->value);
}
