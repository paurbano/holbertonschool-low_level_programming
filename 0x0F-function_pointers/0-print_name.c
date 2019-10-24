#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: name
 * @f: Pointer to a Function
 * Description: function that prints a name.
 * Return: Return nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
