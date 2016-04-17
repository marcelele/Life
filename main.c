#include <stdio.h>
#include <stdlib.h>
#include <cells.h>
#include <rules.h>
#include <io.h>



int main(int argc, char **argv)
{
    int i,j,k;
    grid_t *grid;
    grid = malloc(sizeof(grid_t));
    FILE *in = fopen("file.txt", "r");
    read_bitmap(in,grid);
    for(k=0;k<80;k++){
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d ", grid->cells[i][j].status ); }
    printf("\n" ); }
    printf("Gen number: %d \n", grid->gen_number);
    
    printf("Size: %d \n", grid->size);
    
    *grid=nextgen(grid);
    }
    
	printf("hello world!\n");
    clear_cells(grid);
	return 0;
}
