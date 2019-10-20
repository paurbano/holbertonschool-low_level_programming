#include <stdlib.h>

/**
 * argstostr -  function concatenates all the arguments of your program.
 * @ac: number of elements
 * @av: size of each element
 * Description: concatenates all the arguments of your program.
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{

char *ptr;
int a = 0, i = 0, l = 0, lenArg = 0;

if  (ac == 0 || av == NULL)
return (NULL);

for ( ; i < ac; i++)
{
for (l = 0 ; av[i][l] != '\0' ; l++)
lenArg++;
}

lenArg = lenArg + ac;

ptr = malloc(lenArg + 1 * sizeof(char));

if (ptr == NULL)
return (NULL);

for (i = 0 ; i < ac; i++, a++)
{
for (l = 0 ; av[i][l] != '\0' ; a++, l++)
ptr[a] = av[i][l];

ptr[a] = '\n';
}

ptr[a] = '\0';

return (ptr);
}
