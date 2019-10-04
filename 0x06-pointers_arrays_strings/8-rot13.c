/**
 * rot13 - encodes a string using rot13.
 * @s: array of char
 * Description:  function that encodes a string using rot13.
 * Return: char string
 */
char *rot13(char *s)
{
char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;

for (i = 0; s[i] != '\0' ; i++)
{
for (j = 0; abc[j] != '\0' ; j++)
{
if (s[i] == abc[j])
s[i] = rot[j];
break;
}
}
return (s);
}
