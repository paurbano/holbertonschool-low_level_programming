#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 * @n: parameter
 * Return: Always 0.
 */
void print_line(int n)
{
char retorno = '\n';
int i;

if (n > 0)
{
for (i = 0; i <= n ; i++)
{
_putchar (95);
}
_putchar (retorno);
}
else
{
_putchar (retorno);
}
}
