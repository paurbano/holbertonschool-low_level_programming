/**
 * cap_string - convert lowercase to uppercase capitalize
 * @s: array of char
 *
 * Description:  function is similar to lowerCase function,
 * Return: char string
 */
char *cap_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
s[i] = s[i] - 32;

if ((s[i] >= 'a' && s[i] <= 'z') &&
(s[i - 1] == 32 || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == ','
|| s[i - 1] == ';' || s[i - 1] == '.'  || s[i - 1] == '!' || s[i - 1] == '?'
|| s[i - 1] == '"' || s[i - 1] == '('  || s[i - 1] == ')' || s[i - 1] == '{'
|| s[i - 1] == '}'))

s[i] = s[i] - 32;
}
return (s);
}
