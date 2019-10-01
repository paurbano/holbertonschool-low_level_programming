#include <string.h>
/**
 * _strlen - check the code for Holberton School students.
 * @s: parameter
 * Description: returns the length of a string.
 * Return: int.
 */

int _strlen(char *s)
{
int len = 0;
for ( ; *s != '\0' ; s++)
len = len + 1;
return (len);
}
