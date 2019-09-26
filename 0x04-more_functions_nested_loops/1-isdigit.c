/**
 * _isdigit - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
int i;

if ((c >= 48 && c <= 57))
{
i = 1;
}
else
{
i = 0;
}
return (i);
}
