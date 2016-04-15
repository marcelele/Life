#include <stdio.h>
#include <cells.h>
int main(int argc, char **argv)
{
    int i,j;
    grid_t grid;
    alloc_cells(&grid, 0, 20);
    change_status(&grid,11,11);
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            printf("%d ", grid.cells[i][j].status ); }
    printf("\n" ); }
    printf("Gen number: %d \n", grid.gen_number);
	printf("hello world!\n");
    clear_cells(&grid);
	return 0;
}
