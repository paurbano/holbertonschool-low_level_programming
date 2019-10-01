#include "holberton.h"
/**
 * _puts - entry point
 * @str: string
 * Description: prints a string, followed by a new line, to stdout.
 * Return: void
 */
void _puts(char *str)
{
for (; *str != '\0' ; str++)
_putchar(*str);
_putchar('\n');
}
