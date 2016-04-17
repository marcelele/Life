#include <stdio.h>
#include <stdlib.h>
#include <cells.h>
#include <string.h>


#define MAXLINE 1000


void read_bitmap(FILE *in, grid_t *grid) {
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
        if (fgets(line, sizeof(line), in))
        {
            for (i = 0; i < strlen(line); i++) {
                if (line[i] == '0' || line[i] == '1') {
                    grid_size++;
                }
            }
        }
        //up to this point, this shit works
        rewind(in);
        alloc_cells(grid, 1, grid_size);
        while (!feof (in)) {
            if (fgets(line, sizeof(line), in))
            {
                if (row < grid->size) {
                    for (i = 0; i < MAXLINE; i++) {
                        if (col < grid->size) {
                            if (line[i] == '1') {change_status(grid, row, col); col++;}
                            else if(line[i]=='0'){col++;}
                        }
                    }
                }
            col = 0;
            row++;
            }
        }
    }
}

void write_bitmap(grid_t *grid) {
    int i,j;
    char s[7];
    FILE *out;
    itoa( grid->gen_number, s, 10 );
    out = fopen(strcat("result",s), "w");
    for (i = 0; i < grid->size; i++){
        for (j = 0; j < grid->size; j++) {
            fprintf(out, "%d ", grid->cells[i][j].status);
        } fprintf(out, "\n");
    }
    fclose(out);
}


void display_bitmap(grid_t *grid) {

}