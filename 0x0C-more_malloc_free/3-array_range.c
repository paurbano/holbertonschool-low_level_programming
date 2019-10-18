#include <stdlib.h>
/**
 * array_range -  function that creates an array of integers.
 * @min: number of elements
 * @max: size of each element
 * Description: f function that creates an array of integers.
 * Return: pointer to new string
 */

int *array_range(int min, int max)
{

int indice = 0;
int *array;

if (min > max)
return (NULL);

array = malloc(sizeof(int) * (max - min + 1));

if (array == NULL)
return (NULL);

for ( ; min <= max ; indice++, min++)
array[indice] = min;

return (array);
}
