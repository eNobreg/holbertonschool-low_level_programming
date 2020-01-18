#include "hash_tables.h"
/**
 * hash_table_create - Function to create a hash table
 * @size: Size of the array
 * Return: The Array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_array = malloc(sizeof(hash_table_t));

	if (new_array == NULL)
		return (NULL);

	new_array->size = size;
	new_array->array = malloc(sizeof(hash_node_t *) * size);
	if (new_array->array == NULL)
	{
		free(new_array);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_array->array[i] = NULL;

	return (new_array);
}
