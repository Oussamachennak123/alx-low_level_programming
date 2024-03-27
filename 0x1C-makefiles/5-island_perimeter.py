#!/usr/bin/python3
"""Defineisland perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size_ = 0

    for a in range(height):
        for j in range(width):
            if grid[a][j] == 1:
                size_ += 1
                if (j > 0 and grid[a][j - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][j] == 1):
                    edges += 1
    return size_ * 4 - edges * 2
