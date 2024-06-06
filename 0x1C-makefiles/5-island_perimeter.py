#!/usr/bin/python3
"""defines an island perimeter measuring function"""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island in a grid of 0's and 1's.

    Args:
    grid:List of list of integers representing the grid.

    Returns:
    Integer representing the perimeter of the island.
    """
    if not grid or not grid[0]:
        return 0

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2

                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2
    return perimeter
