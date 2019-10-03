/**
 * _strncat - function is similar to the _strcat function
 * @dest: string destination
 * @src: string source
 * @n: number of characters
 * Description:  function is similar to the _strcat function,
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr;
int longitud = 0;
while (dest[longitud] != '\0')
longitud++;

ptr = dest + longitud;

while (*src != '\0' && n--)
*ptr++ = *src++;

*ptr = '\0';
return (dest);
}
