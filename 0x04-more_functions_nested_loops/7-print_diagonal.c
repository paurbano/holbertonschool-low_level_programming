#include "holberton.h"
/**
 * print_diagonal - entry point
 * @n: Integer
 * Description: draws a diagonal line on the terminal.
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;
char retorno = '\n';
if (n <= 0)
_putchar(retorno);
else
for (i = 1; i <= n; i++)
{
for (j = 1 ; j <= i ; j++)
{
if (j == i)
_putchar(92);
else
_putchar(95);
}
_putchar(retorno);
}
}
