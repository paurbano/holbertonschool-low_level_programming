#include "hash_tables.h"
/**
 * key_index - get a index for a key
 * @key: string to get index
 * @size: size of array
 * Return: index number for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
