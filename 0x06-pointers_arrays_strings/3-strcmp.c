/**
 * _strcmp - reverse an array
 * @s1: array of integers
 * @s2: Integer
 * Description:  function is similar to the strncpy function,
 * Return: pointer to the resulting string dest
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0')
{
if (s1[i] != s2[i])
break;
i++;
}
return (s1[i] - s2[i]);
}
