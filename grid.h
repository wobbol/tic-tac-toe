#ifndef GRID_INCLUDE
#define GRID_INCLUDE

#define NUMCOL 3
#define NUMROW 3
extern int grid[NUMROW][NUMCOL];

void printGrid();
int editGrid(int i, int j, int player);
void clearGrid();
#endif
