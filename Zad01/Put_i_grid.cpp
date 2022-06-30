#include "Put_i_grid.h"

Put_i_grid::Put_i_grid()
{
	initGrid();
}

void Put_i_grid::initGrid()
{
	for (int y = 0; y < ROWS; y++)
	{
		for (int x = 0; x < COLS; x++)
		{
			grid[y][x] = '-';
		}
	}

	cout << "Enter A row: "; cin >> rowA;
	cout << "Enter A col: "; cin >> colA;

	rowX = rowA; colX = colA;
	grid[rowX - 1][colX - 1] = 'X'; 
	grid[rowA - 1][colA - 1] = 'A';

	cout << "Enter B row: "; cin >> rowB;
	cout << "Enter B col: "; cin >> colB;
	grid[rowB - 1][colB - 1] = 'B';
}

void Put_i_grid::printGrid()
{
	{
		system("cls"); 
		for (int y = 0; y < ROWS; y++)
		{
			for (int x = 0; x < COLS; x++)
			{
				cout << grid[y][x];
			}
			cout << endl;
		}
	}
}

void Put_i_grid::moveX()
{
	while (colX != colB)
	{
		if (colX < colB)
		{
			colX++;
		}
		else
		{
			colX--;
		}
		grid[rowX - 1][colX - 1] = 'x';
		printGrid();
		grid[rowX - 1][colX - 1] = '-';
		Sleep(100);
	}

	while (rowX != rowB)
	{
		if (rowX < rowB)
		{
			rowX++;
		}
		else
		{
			rowX--;
		}
		grid[rowX - 1][colX - 1] = 'x';
		printGrid();
		grid[rowX - 1][colX - 1] = '-';
		Sleep(100);
	}
}