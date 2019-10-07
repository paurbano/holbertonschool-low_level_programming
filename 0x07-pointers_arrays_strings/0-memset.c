/**
 * _memset - fills memory with a constant byte.
 * @s: array of char
 * @b: char
 * @n: int
 * Description:  function that fills memory with a constant byte.
 * Return: char string
 */
char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

for (i = 0 ; i < n ; i++)
s[i] = b;

return (s);
}
