#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 * Description: function that prints anything.
 */
void print_all(const char * const format, ...)
{
char *cad;
int cont = 0, other;
va_list parameters;

va_start(parameters, format);
while (*(format + cont) != '\0' && format != NULL)
{
other = 0;
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
other = 1;
break;
}
cont++;
if (*(format + cont + 1) != '\0' && other == 0)
printf(", ");
}
va_end(parameters);
printf("\n");
}
