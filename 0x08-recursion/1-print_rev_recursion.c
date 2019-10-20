#include "holberton.h"
/**
 * _print_rev_recursion - prints a string, followed by a new line.
 * @s: string to print
 * Description: function that prints a string, followed by a new line.
 * Return: pointer to new string
 */
void _print_rev_recursion(char *s)
{
if (*s != 0)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
