#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "args.h"
/*this splits an input string (chain) of ints separated by a char (sep)
* and returns an array of unique integers found in this chain.
* int cnt is modified for us to know about the size of the array
*/
int *split_input(int *cnt, char *chain, char *sep, int num_gens) {
    int a, i;
    int count = 0;
    int isPresent = 0;
    char *pt;
    int *output = malloc(0);
    pt = strtok(chain, sep);
    while (pt != NULL) {
        a = atoi(pt);
        if (a <= num_gens) {
            isPresent = 0;
            for (i = 0; i < count; i++) {
                if (output[i] == a) isPresent = 1;
            }

            if (!isPresent) {
                int *new_output;
                count++;
                new_output = realloc(output, count * sizeof(int));
                if (new_output == NULL) {
                    fprintf(stderr, "Blad realokacji w obludze argumentow!\n");
                    free(output);
                }
                else {
                    output = new_output;
                    output[count - 1] = a;
                }
            }
        }
        pt = strtok(NULL, sep);
    }

    *cnt = count;
    return output;
}
