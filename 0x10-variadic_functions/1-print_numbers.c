#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * Description: print numbers...
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list parameters;
va_start(parameters, n);

for (i = 0 ; i < n ; i++)
{
printf("%d", va_arg(parameters, int));

if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
va_end(parameters);
printf("\n");
}
