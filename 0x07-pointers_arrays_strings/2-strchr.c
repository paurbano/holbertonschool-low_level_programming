/**
* _strchr - function that locates a character in a string.
* @s: array of char
* @c: char
* Description:  function that locates a character in a string.
* Return: char string
 */
char *_strchr(char *s, char c)
{

for ( ; *s != '\0' ; s++)
if (*s == c)
break;

return (s);
}
