#include "holberton.h"
/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
char retorno = '\n';
int i;
for (i = 48; i < 58 ; i++)
{
if (i != 50 && i != 52)
_putchar (i);
}
_putchar (retorno);
}
