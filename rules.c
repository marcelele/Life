#include <stdlib.h>
#include "cells.h"
#include "rules.h"
/*This module is an implementation of Conway's game of Life
* with the grid wrapping also implemented as a feature
*/
int wraprows(int size, int indexrows) {
    if (indexrows < 0)
        return (size - 1);
    if (indexrows > size - 1)
        return 0;
    else return indexrows;
}

int wrapcols(int size, int indexcols) {
    if (indexcols < 0)
        return (size - 1);
    if (indexcols > size - 1)
        return 0;
    else return indexcols;
}

int neighbour(grid_t *grid, int rows, int cols) {
    int i, j;
    int count = 0;
    for (i = -1; i <= 1; i++) {
        for (j = -1; j <= 1; j++) {
            if (i || j) {
                if (grid->cells[wraprows(grid->size, rows - i)][wrapcols(grid->size, cols - j)].status)
                    count++;
            }
        }
    }
    return count;
}

int decide(grid_t *grid, int rows, int cols) {
    int neighbours = neighbour(grid, rows, cols);
    if (neighbours == 3 && grid->cells[rows][cols].status == 0)
        return 1;
    if (neighbours == 3 && grid->cells[rows][cols].status == 1)
        return 1;
    if (neighbours == 2 && grid->cells[rows][cols].status == 1)
        return 1;
    else return 0;
}

grid_t *nextgen(grid_t *grid) {
    int i;
    int j;
    grid_t *next = malloc(sizeof(grid_t));
    alloc_cells(next, grid->gen_number + 1, grid->size);
    for (i = 0; i < grid->size; i++) {
        for (j = 0; j < grid->size; j++) {
            next->cells[i][j].status = decide(grid, i, j);
        }
    }
    clear_cells(grid);
    return next;
}
