#include"holberton.h"
/**
 * times_table - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
int i, j;
int resultado;
for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
resultado = i * j;

if (resultado <= 9 && j != 0)
_putchar(' ');

if (resultado > 9)
{
_putchar('0' + resultado / 10);
_putchar('0' + resultado % 10);
}
else
_putchar('0' + resultado % 10);

if (j == 9)
_putchar('\n');
else
{
_putchar(',');
_putchar(' ');
}
}
}
}
