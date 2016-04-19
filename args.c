#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cells.h"

int split_input(int *output, char *chain, char *sep, int num_gens) {

    const char *s;
    int a,i;
    int count = 0;
    int isPresent = 0;
    char *pt;
    s = sep;
    pt = strtok(chain, s);
    while (pt != NULL) {
        a = atoi(pt);
        if (a < num_gens) {
            isPresent=0;
            if (count > 0) {
                for (i = 0; i < count; i++) {
                    if (output[i] == a) isPresent = 1;
                }
                if (!isPresent) {
                    count++;
                    if(realloc(output, count * sizeof(int *))==NULL)
                        fprintf(stderr, "Blad realokacji w obludze argumentow!\n");
                    output[count - 1] = a;
                }
            }
        }
        pt = strtok(NULL, s);
    }
    return count;
}