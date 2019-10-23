#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: name
 * @f: Pointer to a Function
 * Description: function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
  f(name);
}
