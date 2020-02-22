#!/usr/bin/python3
""" returns the perimeter of the island described in grid """


def island_perimeter(grid):
    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])
    for row in range(rows):
        for column in range(columns):
            # only if Cell has value
            if grid[row][column]:
                # if it's first row or previous cell in that row is water
                if (row - 1 < 0 or grid[row - 1][column] == 0):
                    perimeter += 1
                # if it's last row or next cell in that row is water
                if (row + 1 >= rows or grid[row + 1][column] == 0):
                    perimeter += 1
                # if first column or previous cell in that column is water
                if (column - 1 < 0 or grid[row][column - 1] == 0):
                    perimeter += 1
                # if last column or next cell in that column is water
                if (column + 1 >= columns or grid[row][column + 1] == 0):
                    perimeter += 1
    return perimeter
