#include "hash_tables.h"
shash_node_t *pair(const char *key, const char *value);
/**
 * shash_table_create - Function to create a hash table
 * @size: Size of the array
 * Return: The Array
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *new_array = malloc(sizeof(shash_table_t));

	if (new_array == NULL)
		return (NULL);

	new_array->size = size;
	new_array->array = malloc(sizeof(shash_node_t *) * size);
	if (new_array->array == NULL)
	{
		free(new_array);
		return (NULL);
	}
	new_array->shead = NULL;
	new_array->stail = NULL;
	for (i = 0; i < size; i++)
		new_array->array[i] = NULL;

	return (new_array);
}

/**
 * shash_table_set - Insert in a hash table
 * @ht: Hash table to insertin
 * @key: Key to insert at
 * @value: Value to insert in key
 * Return: 1 or 0 depennding on pass/fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *new_slot = malloc(sizeof(shash_node_t)), *temp = NULL;

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
shash_node_t *pair(const char *key, const char *value)
{
	shash_node_t *new = malloc(sizeof(shash_node_t));

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
	new->sprev = NULL;
	new->snext = NULL;
	return (new);
}

/**
 * shash_table_get - Gets an entry from the hash table
 * @ht: The hash table
 * @key: The key to look for a value at
 * Return: The value or NULL if it failed
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *new = NULL;

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

/**
 * shash_table_print - Prints the hash table
 * @ht: The hash table
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	shash_node_t *new = NULL;

	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			if (ht->array[i])
			{
				new = ht->array[i];
				while (new)
				{
					printf("'%s': '%s'", new->key, new->value);
					if (new->next)
						printf(", ");
					new = new->next;
				}
				j = i + 1;
				while (j < ht->size)
				{
					if (ht->array[j])
					{
						printf(", ");
						break;
					}
					j++;
				}
			}
			i++;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - Delete a hash table
 * @ht: Hash table to delete
 * Return: Never
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *new = NULL, *store = NULL;

		while (i < ht->size)
		{
			if (ht->array[i])
			{
				new = ht->array[i];
				while (new)
				{
					store = new;
					new = new->next;
					free(store->key);
					free(store->value);
					free(store);
				}
			}
			i++;

		}
		free(ht->array);
		free(ht);
}
