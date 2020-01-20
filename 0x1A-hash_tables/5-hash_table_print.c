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
	int flag = 0;

	if (ht == NULL || ht->size == 0)
		return;

	size = ht->size;
	printf("{");
/*go through all array*/
	for (index = 0 ; index < size ; index++)
	{
		/*step into element of array with index*/
		actual = ht->array[index];

		/*go through list to find key*/
		while (actual != NULL)
		{
			/*print pair {key: value}*/
			if (flag)
				printf(", ");
			printf("'%s': '%s'", actual->key, actual->value);
			flag = 1;
			actual = actual->next;
		}
	}
	printf("}\n");
}
