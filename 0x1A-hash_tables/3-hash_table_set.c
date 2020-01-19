#include "hash_tables.h"
hash_node_t *pair(const char *key, const char *value);
/**
 * hash_table_set - Insert in a hash table
 * @ht: Hash table to insertin
 * @key: Key to insert at
 * @value: Value to insert in key
 * Return: 1 or 0 depennding on pass/fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_slot = malloc(sizeof(hash_node_t)), *temp = NULL;

	if (!key || !value || !ht || strlen(key) == 0)
		return (0);

	if (new_slot == NULL)
		return (0);
	temp = new_slot;
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		new_slot = ht->array[index];
		while (new_slot)
		{
			if (strcmp(new_slot->key, key) == 0)
			{
				free(new_slot->value);
				new_slot->value = strdup(value);
				free(temp);
				return (1);
			}
			new_slot = new_slot->next;
		}
	}

	new_slot = pair(key, value);
	if (new_slot == NULL)
	{
		free(new_slot);
		return (0);
	}
	new_slot->next = ht->array[index];
	ht->array[index] = new_slot;
	free(temp);
	return (1);
}
/**
 * pair - Pairs key with value
 * @key:  Key to pair
 * @value: value to add to key
 * Return: New node
 */
hash_node_t *pair(const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}
