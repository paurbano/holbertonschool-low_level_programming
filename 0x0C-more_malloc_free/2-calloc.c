#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Description: function that allocates memory for an array
 * Return: pointer to new string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

unsigned int indice = 0;
char *array;

if ((nmemb < 1) || (size < 1))
return (NULL);

array = malloc(size * nmemb);

if (array == NULL)
return (NULL);

for ( ; indice < size * nmemb; indice++)
array[indice] = 0;

return (array);
}
