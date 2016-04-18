#include <stdio.h>
#include <stdlib.h>
#include "cells.h"
#include "rules.h"
#include "io.h"


int main(int argc, char **argv) {
    int i;
    grid_t *grid;
    grid = malloc(sizeof(grid_t));
    FILE *in = fopen("file.txt", "r");
    read_grid(in, grid);
    for (i = 0; i < 80; i++) {
        display_grid(grid);
        *grid = nextgen(grid);
    }

    printf("hello world!\n");
    clear_cells(grid);
    return 0;
}
