/**
 * _strncpy - function is similar to the strncpy function
 * @dest: string destination
 * @src: string source
 * @n: n bytes of src are copied
 * Description:  function is similar to the strncpy function,
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
