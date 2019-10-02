#include "holberton.h"
/**
 * puts_half - entry point
 * @str: string
 * Description: prints a string, followed by a new line, to stdout.
 * Return: void
 */
void puts_half(char *str)
{
  int longitud = 0, indice, i;
while (str[longitud] != '\0')
longitud++;

if (longitud % 2 == 0)
indice = longitud / 2;
else
indice = (longitud - 1) / 2;

for (i=longitud - indice ; i < longitud ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
