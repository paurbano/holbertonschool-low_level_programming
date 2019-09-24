#include<ctype.h>
/**
 * print_sign - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int c)
{
int i;

if (c > 0)
{
i = 1;
}
if (c == 0)
{
i = 0;
}
if (c < 0)
{
i = -1;
}
return (i);
}
