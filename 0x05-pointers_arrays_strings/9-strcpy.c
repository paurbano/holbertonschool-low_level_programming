#include "holberton.h"
/**
 * _strcpy - entry point
 * @dest: cadena 1
 * @src: cadena 2
 * Description: prints a string, followed by a new line, to stdout.
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0 ; (dest[i] = src[i]) ; i++)
;

dest[i] = '\0';
return (dest);
}
