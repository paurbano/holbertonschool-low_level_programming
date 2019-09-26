#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 * @s: parameter
 * Return: Always 0.
 */
void print_triangle(int s)
{
char retorno = '\n';
int i, j, k;
if (s > 0)
{
for (i = 0; i < s ; i++)
{
for (j = s - i ; j > 1 ; j--)
_putchar(32);
for (k = 0 ; k <= i ; k++)
_putchar (35);
_putchar(retorno);
}
}
else
_putchar (retorno);
}
