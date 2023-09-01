#!/usr/bin/python3

"""
Module for find the perimeter
"""


#!/usr/bin/python3
def island_perimeter(grid):
    """Method for calculate the perimeter of the island"""

    # Create a new list that contains only valid elements
    valid_grid = [[0] * (len(grid[0]) + 2)]
    valid_grid += [[0] + row + [0] for row in grid]
    valid_grid.append([0] * (len(grid[0]) + 2))

    # Calculate the perimeter of the island
    perimeter = sum(4 - (valid_grid[i][j - 1] + valid_grid[i][j + 1] +
                         valid_grid[i - 1][j] + valid_grid[i + 1][j])
                     for i in range(1, len(valid_grid) - 1)
                     for j in range(1, len(valid_grid[i]) - 1)
                     if valid_grid[i][j] == 1)

    return perimeter
