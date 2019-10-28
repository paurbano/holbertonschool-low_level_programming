#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
char *cad;
int cont = 0, other;
va_list parameters;

va_start(parameters, format);
while (*(format + cont) != '\0' && format != NULL)
{
switch (format[cont])
{
case 'c':
other = 0;
printf("%c", va_arg(parameters, int));
break;
case 'i':
other = 0;
printf("%d", va_arg(parameters, int));
break;
case 'f':
other = 0;
printf("%f", va_arg(parameters, double));
break;
case 's':
other = 0;
cad = va_arg(parameters, char *);
if (cad == NULL)
cad = "(nil)";
printf("%s", cad);
break;
default:
other = 1;
break;
}
if (format[cont + 1] != '\0' && other != 1)
printf(", ");
cont++;
}
va_end(parameters);
printf("\n");
}
