#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array of functions
 * @size: size of array
 * @action: function to execute
 * Description: executes a function given as a parameter of array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

if (size < 1 || array == NULL || action == NULL)
return;

for ( ; i < size ; i++)
action(array[i]);

}
