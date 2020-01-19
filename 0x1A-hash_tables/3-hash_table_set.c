#include "hash_tables.h"
/**
 * hash_table_set - creates a hash table
 * @ht: hash table to modifiy
 * @key: key to insert, search
 * @value: value to insert
 * Return: 1 if succeeded, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newpair, *actual;
	unsigned long int index;

	if (ht == NULL)
		return (0);

	if (key == NULL || (strcmp(key, "") == 0) || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);/*get index according key*/
	actual = ht->array[index];/*step into element of array with index*/
	while (actual != NULL)
	{
		if (strcmp(actual->key, key) == 0) /*compare key to find it*/
		{
			/*if founded free to update it and return successfully*/
			free(actual->value);
			actual->value =strdup(value);
			return (1);
		}
		actual = actual->next;
	}
	/*if key not found add new key-value pair to list*/
	newpair = malloc(sizeof(hash_node_t));
	if (newpair == NULL)
		return (0);
	newpair->key = strdup(key);
	newpair->value = strdup(value);
	/*validate the pair:key-value was assigned correctly*/
	if (newpair->key == NULL || newpair->value == NULL)
	{
		free(newpair->key);
		free(newpair->value);
		free(newpair);
		return (0);
	}
	newpair->next = NULL;/*added at the begining of list*/
	newpair->next = ht->array[index];
	ht->array[index] = newpair;
	return (1);
}
