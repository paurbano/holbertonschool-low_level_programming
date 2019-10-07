#include <stdio.h>
/**
* _strchr - function that locates a character in a string.
* @s: array of char
* @c: char
* Description:  function that locates a character in a string.
* Return: char string
 */
char *_strchr(char *s, char c)
{

int found = 0;

for ( ; *s != '\0' ; s++)
{
if (*s == c)
{
found = 1;
break;
}
}

if (found == 1)
return (s);

return (NULL);
}
