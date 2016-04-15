int wraprows(int size, int indexrows);

int wrapcols(int size, int indexcols);

int neighbour(grid_t *grid, int rows, int cols);

int decide(grid_t *grid, int rows, int cols);

grid_t nextgen(grid_t *grid);
