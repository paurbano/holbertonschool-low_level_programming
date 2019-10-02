#include "holberton.h"

/**
 * rev_string - entry point
 * @s: string
 * Description: prints a string, followed by a new line, to stdout.
 * Return: void
 */
void rev_string(char *s)
{
int longitud = 0, izq, der;
char temp;

while (s[longitud] != '\0')
{
longitud++;
}

for (izq = 0, der = longitud - 1 ; izq < (longitud / 2); izq++, der--)
{
temp = s[izq];
s[izq] = s[der];
s[der] = temp;
}
}
