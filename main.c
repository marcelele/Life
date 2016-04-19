#include <stdio.h>
#include <stdlib.h>
#include "cells.h"
#include "rules.h"
#include "io.h"
#include "args.h"


/*  ./life 11 plansza1.txt 1,3,5,4 p 2:4:7*/
int main(int argc, char **argv) {
    int i, j;
    int num_gens;
    int s_gens;
    char mode;
    int d_gens;
    FILE *in;
    grid_t *grid=NULL;
    int *save_gens=NULL;
    int *display_gens=NULL;
    if (argc > 4) {
        num_gens = atoi(argv[1]);
        in = fopen(argv[2], "r");
        s_gens = *split_input(save_gens, argv[3], ",", num_gens);
        mode = argv[4][0]; /*p-png, t- text*/
        if (argc > 5) d_gens = *split_input(display_gens, argv[5], ",", num_gens);
        grid = malloc(sizeof(grid_t));
        if (in) {
            read_grid(in, grid);
            for (i = 0; i <= num_gens; i++) {
                if (mode == 't') {
                    for (j = 0; j < s_gens; j++) {
                        if (save_gens[i] == grid->gen_number) {
                            write_grid(grid);
                        }
                    }
                }
                    if (argc > 5) {
                        for (j = 0; j < d_gens; j++) {
                            if (display_gens[j] == grid->gen_number) {
                                display_grid(grid);
                            }
                        }
                        *grid = nextgen(grid);
                    }
                }
                    printf("hello world!\n");
                    clear_cells(grid);
            }
            fclose(in);
            free(grid);
            free(save_gens);
            free(display_gens);
        }
    

    return 1;
}
