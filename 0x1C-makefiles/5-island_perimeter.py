#!/usr/bin/python3
""" returns the perimeter of the island described in grid

- grid is a list of list of integers:

    * 0 represents a water zone
    * 1 represents a land zone
    * One cell is a square with side length 1
    * Grid cells are connected horizontally/vertically (not diagonally).
    * Grid is rectangular, width and height don’t exceed 100

- Grid is completely surrounded by water, and there is one island (or nothing).

- The island doesn’t have “lakes” (water inside that isn’t connected to the
    water around the island).
"""


def island_perimeter(grid):
    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])
    for row in range(rows):
        for column in range(columns):
            # only if Cell has value(land)
            if grid[row][column]:
                # if it's first row or previous cell in that row is water(0)
                if (row - 1 < 0 or grid[row - 1][column] == 0):
                    perimeter += 1
                # if it's last row or next cell in that row is water(0)
                if (row + 1 >= rows or grid[row + 1][column] == 0):
                    perimeter += 1
                # if first column or previous cell in that column is water(0)
                if (column - 1 < 0 or grid[row][column - 1] == 0):
                    perimeter += 1
                # if last column or next cell in that column is water(0)
                if (column + 1 >= columns or grid[row][column + 1] == 0):
                    perimeter += 1
    return perimeter
