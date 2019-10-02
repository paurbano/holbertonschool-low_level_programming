#include "holberton.h"
/**
 * puts2 - entry point
 * @str: string
 * Description: prints a string, followed by a new line, to stdout.
 * Return: void
 */
void puts2(char *str)
{
int longitud = 0;
while (str[longitud] != '\0')
{
if (longitud % 2 == 0)
{
_putchar(str[longitud]);
}
longitud++;
}
_putchar('\n');
}
