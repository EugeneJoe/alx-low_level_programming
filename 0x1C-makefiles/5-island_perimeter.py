#!/usr/bin/python3
"""
    Contains the definition of the island_perimeter function that returns the
    perimeter of the island described in 'grid'.

    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water and there is 1 island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t connected to the
    water around the island).
"""


def island_perimeter(grid):
    """Returns the perimeter of the island as described by a grid.

    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water and there is 1 island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t connected to the
    water around the island).
    """

    perimeter = 0
    for idx, val in enumerate(grid):
        for idx2, val2 in enumerate(val):
            if grid[idx][idx2] == 1:
                perimeter += 4
                if idx != len(grid) - 1:
                    if grid[idx + 1][idx2] == 1:
                        perimeter -= 1
                if idx2 != len(val) - 1:
                    if grid[idx][idx2 + 1] == 1:
                        perimeter -= 1
                if idx != 0:
                    if grid[idx - 1][idx2] == 1:
                        perimeter -= 1
                if idx2 != 0:
                    if grid[idx][idx2 - 1] == 1:
                        perimeter -= 1
    return perimeter
