#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of array
 * Return: hash a table from size: size
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int i;

	if (size < 1)
	return (NULL);

/* create hash table structure */
	hashtable = malloc(sizeof(hash_table_t));

	if (hashtable == NULL)
		return (NULL);

   /* now create the array*/
	hashtable->array = malloc(sizeof(hash_node_t) * size);

	if (hashtable->array == NULL)
		return (NULL);

	hashtable->size = size;

	/*for (i = 0 ; i < size ; i++)*/
	/*	hashtable->array[i] = NULL;*/

	return (hashtable);
}
