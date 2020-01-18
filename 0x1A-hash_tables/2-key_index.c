#include "hash_tables.h"
/**
 * key_index - Sets the key index
 * @key: Key for the dictionary
 * @size: Size of the array
 * Return: The new key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	const unsigned long int new_key = hash_djb2(key) % size;

	return (new_key);
}
