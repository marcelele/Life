#include <stdio.h>
#include <stdlib.h>
#include "cells.h"
#include <string.h>


#define MAXLINE 1000


void read_grid(FILE *in, grid_t *grid) {
    //this shit works
    int i;
    char line[MAXLINE];
    int grid_size = 0;
    int row = 0;
    int col = 0;
    if (!in) {
        fprintf(stderr, "File open error!\n");
        return;
    }
    else {
        if (fgets(line, sizeof(line), in)) {
            for (i = 0; i < strlen(line); i++) {
                if (line[i] == '0' || line[i] == '1') {
                    grid_size++;
                }
            }
        }
        rewind(in);
        alloc_cells(grid, 1, grid_size);
        while (!feof (in)) {
            if (fgets(line, sizeof(line), in)) {
                if (row < grid->size) {
                    for (i = 0; i < strlen(line); i++) {
                        if (col < grid->size) {
                            if (line[i] == '1') {
                                change_status(grid, row, col);
                                col++;
                            }
                            else if (line[i] == '0') { col++; }
                        }
                    }
                }
                col = 0;
                row++;
            }
        }
    }
}

void write_grid(grid_t *grid) {
    //this shit doesn't work
    int i, j;
    char s[7];
    FILE *out= fopen(strcat("result", s), "w");
    itoa(grid->gen_number, s, 10);
    for (i = 0; i < grid->size; i++) {
        for (j = 0; j < grid->size; j++) {
            fprintf(out, "%d ", grid->cells[i][j].status);
        }
        fprintf(out, "\n");
    }
    fclose(out);
}


void display_grid(grid_t *grid) {
    int i, j;

    for (i = 0; i < grid->size; i++) {
        for (j = 0; j < grid->size; j++) {
            printf("%d ", grid->cells[i][j].status);
        }
        printf("\n");
    }
    printf("Gen number: %d \n", grid->gen_number);
}