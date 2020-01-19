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
	hash_node_t *new_slot = malloc(sizeof(hash_node_t));

	if (!key || !value || !ht || strlen(key) == 0)
		return (0);

	if (new_slot == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	new_slot = pair(key, value);
	if (new_slot == NULL)
	{
		free(new_slot);
		return (0);
	}
	new_slot->next = ht->array[index];
	ht->array[index] = new_slot;
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
	hash_node_t *new = malloc(sizeof(hash_node_t) * 1);

	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (new->key == NULL)
		return (NULL);
	return (new);
}
