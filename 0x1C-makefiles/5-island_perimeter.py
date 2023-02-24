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
        for i in range(len(row):
            if found and row[i] == 1:
                width += 1
            if cell == 1 and found == False:
                found = True
                width = height = 1
                idx = i
        if width or height:
            per_row = 2 * (width + height)
            perimeter += per_row
    return perimeter
