#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: number to calculate factorial
 * Description: function that returns the factorial of a given number.
 * Return: int factorial
 */
int factorial(int n)
{

int f = 0;

if (n < 0)
return (-1);

if (n == 0)
return (1);

return (n * (factorial(n - 1)));
}
