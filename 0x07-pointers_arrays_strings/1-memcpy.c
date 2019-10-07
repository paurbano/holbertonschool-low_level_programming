/**
 * _memcpy - function that copies memory area.
 * @dest: array of char
 * @src: char
 * @n: int
 * Description:  function that function that copies memory area.
 * Return: char string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;
for (i = 0 ; i < n ; i++)
dest[i] = src[i];

return (dest);
}
