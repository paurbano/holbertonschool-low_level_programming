#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *@int: parameter
 * Return: Always 0.
 */
int fibonacci(int);

int main(void)
{
int i, f;

for (i = 1 ; i <= 50 ; i++)
{
f = fibonacci(i);
printf ("%d ", f);
}
return (0);
}
/**
 * fibonacci - check the code for Holberton School students.
 * @n: parameter
 * Return: Always 0.
 */

int fibonacci(int n)
{
if (n == 0 || n == 1)
return (n);
else
return (fibonacci(n - 1) + fibonacci(n - 2));
}
