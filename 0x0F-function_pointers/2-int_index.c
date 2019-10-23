#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array of functions
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 * Description: executes a function given as a parameter on an array.
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
int retValue = 0;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for ( ; i < size ; i++)
{
retValue = cmp(array[i]);
if (retValue != 0)
{
return (i);
break;
}
}
return (-1);
}
