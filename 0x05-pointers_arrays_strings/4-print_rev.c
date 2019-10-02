#include "holberton.h"
/**
 * print_rev - entry point
 * @s: string
 * Description: prints a string, followed by a new line, to stdout.
 * Return: void
 */
void print_rev(char *s)
{
int longitud = 0, inicio;
while (s[longitud] != '\0')
longitud++;

for (inicio = longitud - 1 ; inicio >= 0 ; inicio--)
_putchar(s[inicio]);

_putchar('\n');
}
