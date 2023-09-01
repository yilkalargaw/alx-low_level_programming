#!/usr/bin/python3

"""
Module for find the perimeter
"""


def island_perimeter(grid):
    """Method for calculate the perimeter of the island"""

    return sum(4 - (grid[line][col - 1] +
                    grid[line][col + 1] +
                    grid[line - 1][col] +
                    grid[line + 1][col])
               for line in range(len(grid))
               for col in range(len(grid[line])) if grid[line][col] == 1)
