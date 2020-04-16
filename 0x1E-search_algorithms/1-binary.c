#include "search_algos.h"

/**
 * print_array - print every subarray
 * @array : A vector is a one-dimensional array
 * @left : left index
 * @right : right index
 * Return: none
 */
void print_array(int *array, int left, int right)
{
	printf("Searching in array: ");
	for (left ; left <= right; left++)
	{
		if (left == right)
		{
			printf("%d", array[left]);
		}
		else
		{
			printf("%d, ", array[left]);
		}
	}
	printf("\n");
}

/**
 * binary_search - searches in an array using the Binary search algorithm
 * @array : A vector is a one-dimensional array
 * @size : size is the number of elements in array
 * @value : value is the value to search for
 * Return: the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left;
	int right;
	int middle;

	if (array == NULL)
		return (-1);

	left = 0;
	right = (int)size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
