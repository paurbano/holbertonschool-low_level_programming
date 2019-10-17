#include <stdlib.h>

/**
 * compara - function that creates an array of chars
 * @H: char
 * @N: size of matrix
 * Description:  compares 2 strings.
 * Return: int
 */

int compara(const char *H, const char *N)
{
while (*H && *N)
{
if (*H != *N)
return (0);

H++;
N++;
}

return (*N == '\0');
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
while (*haystack != '\0')
{
if ((*haystack == *needle) && compara(haystack, needle))
return (haystack);
haystack++;
}

return (NULL);
}
