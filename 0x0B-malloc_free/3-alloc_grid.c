#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: ancho
 * @height: alto
 * Description:  returns a pointer to a 2 dimensional array of integers.
 * Return: pointer to char
 */
int **alloc_grid(int width, int height)
{
int **ptrMatriz;
int ancho, alto;

if ((width < 1) || (height < 1))
return (NULL);

ptrMatriz = malloc(height * sizeof(int *));
if (ptrMatriz == NULL)
{
free(ptrMatriz);
return (NULL);
}

for (alto = 0 ; alto <  height ; alto++)
{
ptrMatriz[alto] = malloc(width * sizeof(int));
if (ptrMatriz[alto] == NULL)
{
for ( ; alto >= 0 ; alto--)
free(ptrMatriz[alto]);
free(ptrMatriz);
return (NULL);
}
}
for (alto = 0 ; alto < height ; alto++)
{
for (ancho = 0 ; ancho < width ; ancho++)
ptrMatriz[alto][ancho] = 0;
}
return (ptrMatriz);
}
