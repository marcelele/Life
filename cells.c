#include <cells.h>
#include <stdlib.h>


void alloc_cells(grid_t *grid, int gen_num, int s){
    int i = 0;
    int j = 0;
    
    grid->gen_number=gen_num;
    grid->size=s;
    /*alloc rows*/
    grid->cells= malloc(s * sizeof(cell_t *) );
    for (i=0; i<s; i++){
         /*alloc columns*/
         grid->cells[i] = malloc(s * sizeof(cell_t ) );
         for(j=0;j<s;j++){
            /*filling grid with zeroes*/
            grid->cells[i][j].status=0;
            }
    }
}
         
void clear_cells(grid_t *grid){
    free(grid->cells);
    free(grid);
}

void change_status(grid_t *grid, int rows, int cols){
    grid->cells[rows][cols].status = !grid->cells[rows][cols].status;
}
