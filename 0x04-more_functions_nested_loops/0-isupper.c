/**
 * _isupper - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
int i;

if ((c >= 65 && c <= 90))
{
i = 1;
}
else
{
i = 0;
}
return (i);
}
