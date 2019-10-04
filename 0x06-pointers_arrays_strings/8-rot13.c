/**
 * rot13 - encodes a string using rot13.
 * @s: array of char
 * Description:  function that encodes a string using rot13.
 * Return: char string
 */
char *rot13(char *s)
{
int i;
char caracter;

for (i = 0; s[i] != '\0' ; i++)
{
caracter = s[i];
if (caracter >= 'A' && caracter < 'N')
{
caracter += 13;
}
else if (caracter >= 'N' && caracter <= 'Z')
{
caracter -= 13;
}
else if (caracter >= 'a' && caracter < 'n')
{
caracter += 13;
}
else if (caracter >= 'n' && caracter <= 'z')
{
caracter -= 13;
}
s[i] = caracter;
}
return (s);
}
