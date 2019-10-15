#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Description:  contains a copy of the string given as a parameter.
 * Return: pointer to char
 */
char *_strdup(char *str)
{
char *ptrStr;
int  i;

if (str ==  NULL)
return (NULL);

for (i = 0; str[i] != '\0' ; i++)
;

ptrStr =  malloc((i + 1) * sizeof(char));

if (ptrStr == NULL)
return (NULL);

for (i = 0; str[i] != '\0' ; i++)
{
ptrStr[i] = str[i];
}

ptrStr[i] = '\0';

return (ptrStr);
}
