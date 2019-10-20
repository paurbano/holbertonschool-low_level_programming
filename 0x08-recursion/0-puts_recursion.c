#include "holberton.h"
/**
 * _puts_recursion -  function that prints a string, followed by a new line.
 * @s: string to print
 * Description: function that prints a string, followed by a new line.
 * Return: pointer to new string
 */
void _puts_recursion(char *s)
{
if (*s == 0)
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
