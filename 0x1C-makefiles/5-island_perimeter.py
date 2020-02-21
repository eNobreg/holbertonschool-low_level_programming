#!/usr/bin/python3
""" Module for island perimeter"""


def island_perimeter(grid):
    sum_i = 0

    for j in range(len(grid)):
        for i in range(len(grid[j])):
            if grid[j][i] == 1:
                perimeter = 4
                try:
                    if grid[j - 1][i] == 1:
                        perimeter -= 1
                    if grid[j][i - 1] == 1:
                        perimeter -= 1
                    if grid[j][i + 1] == 1:
                        perimeter -= 1
                    if grid[j + 1][i] == 1:
                        perimeter -= 1
                    sum_i += perimeter
                except:
                    pass
    return sum_i
