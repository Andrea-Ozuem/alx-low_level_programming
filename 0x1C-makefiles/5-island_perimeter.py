#!/usr/bin/python3

"""Module documentation
"""


def island_perimeter(grid):
    ''' returns the perimeter of the island described in grid
    Args:
        grid (list): list of list of integers
                     of 0s and 1s
    Returns:
        the perimeter of the island
    '''
    perimeter = 0
    per_row = 0

    for row in grid:
        found = False
        height = width = 0
        for cell in row:
            if found and cell == 1:
                width += 1
            if cell == 1 and not found:
                found = True
                width = height = 1
        if width or height:
            per_row = 2 * (width + height)
            perimeter += per_row
    return perimeter
