#include "holberton.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: matrix mxm
 * @size: size of matrix
 * Description:  function that prints the chessboard.
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i;
int sumaDiagonal1 = 0, sumaDiagonal2 = 0;

for (i = 0 ; i < (size * size) ; i = i + size + 1)
{
sumaDiagonal1 = sumaDiagonal1 + a[i];
}

for (i = 0 ; i < (size * size) - size ; )
{
i = i + size - 1;
sumaDiagonal2 = sumaDiagonal2 + a[i];
}

printf("%d, %d\n", sumaDiagonal1, sumaDiagonal2);
}
