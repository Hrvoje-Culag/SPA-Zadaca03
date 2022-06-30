#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class Put_i_grid
{
private:
	static const int ROWS = 20, COLS = 40;
	char grid[ROWS][COLS];
	int rowA, colA, rowB, colB, rowX, colX;

	void initGrid();
	void printGrid();

public:
	Put_i_grid();
	void moveX(); 
};