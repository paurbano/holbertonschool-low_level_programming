#include "holberton.h"
/**
 * print_array - entry point
 * @a: array
 * @n: number of elements to be printed
 * Description: prints a string, followed by a new line, to stdout.
 * Return: void
 */
void print_array(int *a, int n)
{
int i;

for (i = 0 ; i < n; i++)
{
if (i > 0)
printf(", ");
printf("%d", a[i]);
}
printf("\n");
}
