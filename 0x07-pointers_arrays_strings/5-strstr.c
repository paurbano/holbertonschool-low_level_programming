#include <stdlib.h>

/**
 * compara - function that creates an array of chars
 * @H: char
 * @N: size of matrix
 * Description:  compares 2 strings.
 * Return: int
 */

int compara(char *H, char *N)
{
while (*H != '\0' && *N != '\0')
{
if (*H != *N)
return (0);

H++;
N++;
}
return (1);
}

/**
 * _strstr -  function that locates a substring.
 * @haystack: string where to search
 * @needle: string to search
 * Description:   function that locates a substring.
 * Return: char * string
 */

char *_strstr(char *haystack, char *needle)
{

if (haystack == NULL || needle == NULL)
return (NULL);

if (*needle == '\0')
return (haystack);

while (*haystack != '\0')
{
if (*haystack == needle[0])
{
if (compara(haystack, needle))
return (haystack);
}
haystack++;
}

return (NULL);
}
