#include "holberton.h"
/**
 * print_rev - entry point
 * @s: string
 * Description: prints a string, followed by a new line, to stdout.
 * Return: void
 */
void print_rev(char *s)
{
int i = 0, j;
for (; *s != '\0' ; s++)
i++;

for (j = 0; j <= i ; j++)
_putchar(*(s--));

_putchar('\n');

}
