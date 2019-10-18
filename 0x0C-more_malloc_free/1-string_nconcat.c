#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to copy
 * Description: function that concatenates two strings.
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptrConcat;
unsigned int lenS1 = 0, lenS2 = 0, indice = 0, size = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[lenS1] != '\0')
lenS1++;

while (s2[lenS2] != '\0')
lenS2++;

if (n >= lenS2)
n = lenS2;

size = lenS1 + n + 1;

ptrConcat = malloc(sizeof(char) * size);

if (ptrConcat == NULL)
return (NULL);

for (; indice < size - 1 ; indice++)
{
if (*s1 != '\0')
ptrConcat[indice] = *(s1++);
else
ptrConcat[indice] = *(s2++);
}

ptrConcat[indice] = '\0';

return (ptrConcat);
}
