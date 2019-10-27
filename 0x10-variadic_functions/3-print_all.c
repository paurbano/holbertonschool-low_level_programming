#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 * Description: function that prints anything.
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
char *cad;
int cont = 0;
va_list parameters;

va_start(parameters, format);

while (*(format + cont) != '\0' && format != NULL)
{
switch (format[cont])
{
case 'c':
printf("%c", va_arg(parameters, int));
break;

case 'i':
printf("%d", va_arg(parameters, int));
break;

case 'f':
printf("%f", va_arg(parameters, double));
break;

case 's':
cad = va_arg(parameters, char *);
if (cad == NULL)
cad = "(nil)";
printf("%s", cad);
break;

default:
cont++;
continue;
}
++cont;
if (*(format + cont) != '\0')
printf(", ");
}
va_end(parameters);
printf("\n");
}
