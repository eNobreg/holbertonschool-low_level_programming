#include "hash_tables.h"
/**
 * hash_table_print - Prints the hash table
 * @ht: The hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *new = NULL;

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
