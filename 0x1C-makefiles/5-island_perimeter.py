#!/usr/bin/python3
""" returns the perimeter of the island described in grid """


def island_perimeter(grid):
    perimeter = 0
    filas = len(grid)
    columnas = len(grid[0])
    for fila in range(filas):
        for columna in range(columnas):
            if grid[fila][columna]:
                if (fila - 1 < 0 or grid[fila - 1][columna] == 0):
                    perimeter += 1
                if (fila + 1 >= filas or grid[fila + 1][columna] == 0):
                    perimeter += 1
                if (columna - 1 < 0 or grid[fila][columna - 1] == 0):
                    perimeter += 1
                if (columna + 1 >= columnas or grid[fila][columna + 1] == 0):
                    perimeter += 1
    return perimeter
