#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Description:  concatenates two strings..
 * Return: pointer to char
 */
char *str_concat(char *s1, char *s2)
{
char *ptrStr;
int  i, j, lenCad = 0;

if (s1 ==  NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0 ; s1[i] != '\0' ; i++)
lenCad++;

for (i = 0 ; s2[i] != '\0' ; i++)
lenCad++;

ptrStr =  malloc((lenCad + 1) * sizeof(char));

if (ptrStr == NULL)
return (NULL);

for (i = 0, j = 0 ; s1[i] != '\0' ; i++, j++)
{
ptrStr[i] = s1[i];
}

for (i = 0 ; s2[i] != '\0' ; i++, j++)
{
ptrStr[j] = s2[i];
}

ptrStr[j] = '\0';

return (ptrStr);
}
