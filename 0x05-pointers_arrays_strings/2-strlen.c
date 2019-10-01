#include <string.h>
/**
 * _strlen - check the code for Holberton School students.
 * @s: parameter
 * Description: returns the length of a string.
 * Return: Always 0.
 */

int _strlen(char *s)
{
char str[10];
int len;
strcpy(str, s);
len = strlen(str);
return (len);
}
