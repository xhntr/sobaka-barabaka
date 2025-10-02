#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define ROWS 20
#define COLS 40

void initializegrid(int grid[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			grid[i][j] = rand() % 2;
		}
	}
}


void displaygrid(int grid[ROWS][COLS]){
		system("cls");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (grid[i][j] == 1) {
				printf("O");
			}
			else {
				printf("");
			}
		}
		printf("\n");

	}
}

int countneighbours(int grid[ROWS][COLS], int x, int y) {
	int count = 0;
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			if (i == 0 && j == 0) continue;
			int nx = x + j;
			int ny = y + j;
			if (nx >= 0 && nx < ROWS && ny >= 0 && ny < COLS) {
				count += grid[nx][ny];
			}
		}
	}
	return count;
	
}

void updategrid(int grid[ROWS][COLS]) {
	int tempgrid[ROWS][COLS] = { 0 };
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			int neighbors = countneighbours(grid, i, j);
			if (grid[i][j] == 1 && (neighbors == 2 || neighbors == 3)) {
				tempgrid[i][j] = 1;
			}
			else if (grid[i][j] == 0 && neighbors == 3) {
				tempgrid[i][j] = 1;
			} else {
				tempgrid[i][j] = 0;
			}

		}
	}

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			grid[i][j] = tempgrid[i][j];
		}
	}
}

	int main() {
		int grid[ROWS][COLS];
		initializegrid(grid);

		while (1) {
			displaygrid(grid);
			updategrid(grid);
			Sleep(1000);
		}
		return 0;
	}