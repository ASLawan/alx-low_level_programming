#!/usr/bin/python3
"""
    Module to compute the perimter of a given
    grid

"""


def island_perimeter(grid):
    """Function that computes the perimeter of a given grid"""
    w_count = 0
    h_count = 0
    h_counted = False

    for row in grid:
        row_width = 0
        for i in row:
            if i == 1 and h_counted is False:
                h_count += 1
                h_counted = True
            if i == 1:
                row_width += 1
        h_counted = False
        if w_count < row_width:
            w_count = row_width

    if w_count > 100:
        width = 100
    else:
        width = w_count
    if h_count > 100:
        height = 100
    else:
        height = h_count

    perimter = (width + height) * 2
    return perimter
