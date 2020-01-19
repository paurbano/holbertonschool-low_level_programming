#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: hash table to print
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *actual;
	unsigned long int index, size;

	if (ht == NULL || ht->size == 0)
	{
		printf("{}\n");
		return;
	}

	size = ht->size;
	printf("{");
	for (index = 0 ; index < size ; index++)
	{

		/*step into element of array with index*/
		actual = ht->array[index];

		/*go through list to find key*/
		while (actual != NULL)
		{
			printf("'%s': '%s'", actual->key, actual->value);
			/*print pair {key: value}*/
			if (actual->next)
				printf(", ");
			actual = actual->next;
		}
	}
	printf("}\n");
}
