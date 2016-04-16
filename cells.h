typedef struct {
    int status;

} cell_t;

typedef struct {
    cell_t **cells;
    int size;
    int gen_number;
} grid_t;

void alloc_cells(grid_t *grid, int gen_num, int s);

void clear_cells(grid_t *grid);

void change_status(grid_t *grid, int rows, int cols);
