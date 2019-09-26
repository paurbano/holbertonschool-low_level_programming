#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
char retorno = '\n';
int i, j;
for (i = 0; i <= 10 ; i++)
{
for (j = 0; j < 15 ; j++)
{
if (j > 9)
_putchar ('0' + j / 10);

_putchar ('0' + j % 10);
}
_putchar (retorno);
}
}
