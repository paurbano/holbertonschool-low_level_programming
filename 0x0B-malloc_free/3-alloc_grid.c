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
  
if (width <= 0 || height <= 0 )
return (NULL);

ptrMatriz = malloc (heigth * sizeof(int));
if(ptrMatriz == NULL)
{
free(ptrMatriz);
return (NULL);
}

for (alto = 0 ; alto <= height ; alto++) 
{
ptrMatriz[alto] = malloc (width * sizeof(int);
if (ptrMatriz[alto] == NULL)
{
for ( ; alto >=0 ; alto--)
free(ptrMatriz[alto]);

free(ptrMatriz);
return (NULL);
}
}
for(ancho = 0 ; ancho < width ; ancho++)
{
for (alto = 0 ; alto < height ; alto++)
ptrMatriz[ancho][alto] = 0 ;
}
return (ptrMatriz) ;
}
