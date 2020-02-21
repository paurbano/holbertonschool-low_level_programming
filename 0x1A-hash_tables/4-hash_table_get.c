#include "hash_tables.h"
/**
 * hash_table_get - creates a hash table
 * @ht: hash table to modifiy
 * @key: key to search
 * Return: value associated to key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *actual;
	unsigned long int index;

	if (ht == NULL)
		return (0);

	if (key == NULL || (strcmp(key, "") == 0))
		return (0);
	/*get index according key*/
	index = key_index((unsigned char *)key, ht->size);

/*step into element of array with index*/
	actual = ht->array[index];
	/*go through list to find key*/
	while (actual != NULL)
	{
		/*compare key to find it*/
		if (strcmp(actual->key, key) == 0)
		{
			/*if found return value associated*/
			return (actual->value);
		}
		actual = actual->next;
	}
	/*if not found return NULL*/
	return (NULL);
}
