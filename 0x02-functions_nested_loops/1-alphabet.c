#include "holberton.h"
/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char letra = 'a';
char retorno = '\n';
while (letra <= 'z')
{
if (letra != 'q' && letra != 'e')
{
_putchar (letra);
}
letra++;
}
_putchar (retorno);
}
