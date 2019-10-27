#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: Symbol
 * Description: returns the sum of all its parameters..
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
va_list parameters;
int suma = 0;
unsigned int i;

if (n != 0)
{
va_start(parameters, n);

for (i = 0 ; i < n ; i++)
{
suma += va_arg(parameters, int);
}
va_end(parameters);
}
return (suma);
}
