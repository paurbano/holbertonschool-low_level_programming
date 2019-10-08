#include "holberton.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: matrix 8*8
 * Description:  function that prints the chessboard.
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int fila, columna;
for (fila = 0 ; fila < 8 ; fila++)
{
for (columna = 0 ; columna < 8; columna++)
{
_putchar(a[fila][columna]);
}
_putchar('\n');
}
}
