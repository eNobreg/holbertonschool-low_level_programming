#!/usr/bin/python3
""" Module for island perimeter"""


def island_perimeter(grid):
    """ Island perimeter """
    sum_i = 0

    for j in range(len(grid)):
        for i in range(len(grid[j])):
            c = i
            if grid[j][i] == 1:
                perimeter = 4
                try:
                    if j - 1 >= 0 and grid[j - 1][c] == 1:
                        perimeter -= 1
                    if c + 1 < len(grid[j]) and grid[j][c + 1] == 1:
                        perimeter -= 1
                    if c - 1 >= 0 and grid[j][c - 1] == 1:
                        perimeter -= 1
                    if j + 1 < len(grid) and grid[j + 1][c] == 1:
                        perimeter -= 1
                except IndexError:
                    pass
                sum_i += perimeter
    return sum_i
