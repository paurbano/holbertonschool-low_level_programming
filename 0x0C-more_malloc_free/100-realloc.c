#include <stdlib.h>
/**
 * _realloc -  function that creates an array of integers.
 * @ptr: number of elements
 * @old_size:old size of element
 * @new_size: new size to assig
 * Description: f function that creates an array of integers.
 * Return: pointer with new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int *nptr, *p;
unsigned int c;

if (old_size == new_size)
return (ptr);

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

/*darle tipo al puntero generico que se pasa como parámetro*/
p = ptr;

/*tamaño del nuevo puntero*/
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);

if (ptr == NULL)
return (NULL);

if (new_size > old_size)
{
for (c = 0 ; c <= old_size ; c++)
nptr[c] = p[c];
}
else
{
for (c = 0 ; c < new_size ; c++)
nptr[c] = p[c];
}
free(ptr);
return (nptr);
}
