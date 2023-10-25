#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island."""
    width = len(grid[0])
    height = len(grid)
    edges = 0
    perimeter = 0

    for b in range(height):
        for j in range(width):
            if grid[b][j] == 1:
                perimeter += 1
                if (j > 0 and grid[b][j - 1] == 1):
                    edges += 1
                if (b > 0 and grid[b - 1][j] == 1):
                    edges += 1
    return perimeter * 4 - edges * 2
