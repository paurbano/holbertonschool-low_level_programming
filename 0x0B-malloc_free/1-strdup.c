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
int len = 0, i;

if (str ==  NULL)
return (NULL);

for (i = 0; str[i] != '\0' ; i++)
len++;

ptrStr =  malloc(len *sizeof(char));

if (ptrStr == NULL)
return (NULL);

for (i = 0; str[i] != '\0' ; i++)
ptrStr[i] = str[i];

return (ptrStr);
}
