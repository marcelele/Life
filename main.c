#include <stdio.h>
#include <stdlib.h>
#include "cells.h"
#include "rules.h"
#include "io.h"
#include "args.h"
#include "pngio.h"

/*  ./life 11 plansza1.txt 1,3,5,4 p 2:4:7*/
int main(int argc, char **argv) {
    int i, j;
    int num_gens;
    int s_gens;
    char mode;
    int d_gens = 0;
    FILE *in;
    grid_t *grid;
    int *save_gens;
    int *display_gens;
    if (argc < 5) return 1;

    num_gens = atoi(argv[1]);
    in = fopen(argv[2], "r");

    save_gens = split_input(&s_gens, argv[3], ",", num_gens);

    mode = argv[4][0]; /*p-png, t- text*/

    if (argc > 5)
        display_gens = split_input(&d_gens, argv[5], ",", num_gens);
    else display_gens = malloc(0);

    grid = malloc(sizeof(grid_t));
    if (in) {
        read_grid(in, grid);
        for (i = 0; i <= num_gens; i++) {
            if (mode == 't') {
                for (j = 0; j < s_gens; j++) {
                    if (save_gens[j] == grid->gen_number) {
                        write_grid(grid);
                    }
                }
            }
            if (mode == 'p') {
                for (j = 0; j < s_gens; j++) {
                    if (save_gens[j] == grid->gen_number) {
                        save_png(grid);
                    }
                }
            }
            if (argc > 5) {
                for (j = 0; j < d_gens; j++) {
                    if (display_gens[j] == grid->gen_number) {
                        display_grid(grid);
                    }
                }
            }
            grid = nextgen(grid);
        }
        clear_cells(grid);
    }
    free(save_gens);
    free(display_gens);

    fclose(in);

    return 0;
}
