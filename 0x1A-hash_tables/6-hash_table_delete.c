#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to print
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *actual, *temp;
	unsigned long int index, size;

	if (ht == NULL)
		return;
	size = ht->size;

/*go through all array*/
	for (index = 0 ; index < size ; index++)
	{
		/*step into element of array with index*/
		actual = ht->array[index];

		/*go through list to free*/
		while (actual != NULL)
		{
			temp = actual->next;
			free(actual->key);
			free(actual->value);
			free(actual);
			actual = temp;
		}
		if (actual != NULL)
		{
			free(actual);
			actual = NULL;
		}
	}
	free(ht->array);
	free(ht);

}
