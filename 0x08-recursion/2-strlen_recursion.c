#include "holberton.h"
/**
 * _strlen_recursion -  function that returns the length of a string.
 * @s: string to print
 * Description: function that returns the length of a string.
 * Return: pointer to new string
 */
int _strlen_recursion(char *s)
{
int len = 0;

if (*s != 0)
{
s++;
len = _strlen_recursion(s) + 1;
return (len);
}

return (0);
}
