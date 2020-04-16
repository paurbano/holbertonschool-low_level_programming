#include "search_algos.h"
/**
 * linear_search - searches in an array using the Linear search algorithm
 * @array : A vector is a one-dimensional array
 * @size : size is the number of elements in array
 * @value : value is the value to search for
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
