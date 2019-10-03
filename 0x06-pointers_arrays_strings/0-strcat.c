#include <string.h>
/**
 * _strcat - entry point
 * @dest: string destination
 * @src: string source
 * Description: prints a string, followed by a new line, to stdout.
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{

char *ptr = dest + strlen(dest);
while (*src != '\0')
*ptr++ = *src++;

*ptr = '\0';

return (dest);
}
