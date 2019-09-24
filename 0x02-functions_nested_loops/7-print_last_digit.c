#include"holberton.h"
#include <stdlib.h>
/**
 * print_last_digit - writes the character c to stdout
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
int last;
last = abs(n % 10);
_putchar('0' + last);
return (last);
}
