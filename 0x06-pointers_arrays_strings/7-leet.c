/**
 * leet - convert lowercase to uppercase
 * @s: array of char
 * Description:  function that encodes a string into 1337.
 * Return: char string
 */
char *leet(char *s)
{
char letras[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char numeros[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
int i, j;

for (i = 0; s[i] != '\0' ; i++)
{
for (j = 0; letras[j] != '\0' ; j++)
{
if (s[i] == letras[j])
s[i] = numeros[j];
}
}
return (s);
}
