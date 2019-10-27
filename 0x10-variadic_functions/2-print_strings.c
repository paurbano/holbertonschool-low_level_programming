#include "variadic_functions.h"
/**
 * print_strings - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * Description: returns the sum of all its parameters..
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list parameters;
char *cad;

va_start(parameters, n);

for (i = 0 ; i < n ; i++)
{
cad = va_arg(parameters, char *);

if (cad == NULL)
cad = "(nil)";

printf("%s", cad);

if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
va_end(parameters);
printf("\n");
}
