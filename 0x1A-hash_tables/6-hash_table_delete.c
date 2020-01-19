#include "hash_tables.h"
/**
 * hash_table_delete - Delete a hash table
 * @ht: Hash table to delete
 * Return: Never
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *new = NULL, *store = NULL;

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
