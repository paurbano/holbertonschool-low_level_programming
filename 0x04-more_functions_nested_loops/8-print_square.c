#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 * @s: parameter
 * Return: Always 0.
 */
void print_square(int s)
{
char retorno = '\n';
int i, j;
if (s > 0)
{
for (i = 0; i < s ; i++)
{
for (j = 0; j < s ; j++)
{
_putchar (35);
}
_putchar (retorno);
}
}
else
_putchar (retorno);
}
