#include <stdio.h>
/**
 * _strpbrk - encodes a string using rot13.
 * @s: array of char
 * @accept: array
 * Description:  function that encodes a string using rot13.
 * Return: char string
 */
char *_strpbrk(char *s, char *accept)
{
int j;

for (; *s != '\0' ; s++)
{
for (j = 0; accept[j] != '\0' ; j++)
{
if (*s == accept[j])
return (s);
}
}
return (NULL);
}
