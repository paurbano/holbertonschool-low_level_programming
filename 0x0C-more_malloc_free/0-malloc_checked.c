#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: amount of bytes to allocate
 * Description: allocate memory
 * Return: no return
 */
void *malloc_checked(unsigned int b)
{

void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);

return (ptr);
}
