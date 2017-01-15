#include<iostream>
using namespace std;
const int MAX_SIZE = 7;
const char FINAL = 'F';
const char WALL = 'X';
const char EMPTY = ' ';
const char MARKED = '.';

int minPath[MAX_SIZE*MAX_SIZE] = {0};
int minPathLength = MAX_SIZE*MAX_SIZE;

bool isFree(char labirinth[][MAX_SIZE],
	int row, int col) {
	return ((row >= 0 && row <MAX_SIZE) &&
		   (col >= 0 && col <MAX_SIZE) &&
		   labirinth[row][col] == EMPTY) ||
		   labirinth[row][col] == FINAL;
}
void markUnmarkCell(char labirinth[][MAX_SIZE],
	int row, int col, bool mark) {
	if (mark) {
		labirinth[row][col] = MARKED;
	}
	else {
		labirinth[row][col] = EMPTY;
	}
}
void copyPath(int currentPath[], int currentPathLength) {
	for (int i = 0; i < currentPathLength; i++) {
		minPath[i] = currentPath[i];
	}
	minPathLength = currentPathLength;
}

void findAllPaths(char labirinth[][MAX_SIZE], 
				  int row, int col, int currentPath[], int currentPathLength) {
	if (labirinth[row][col] == FINAL) {
		if (currentPathLength < minPathLength) {
			copyPath(currentPath, currentPathLength);
		}
	}
	markUnmarkCell(labirinth, row, col, true);
	currentPath[currentPathLength++] = MAX_SIZE*row + col;

	if (isFree(labirinth, row + 1, col))
	{
		findAllPaths(labirinth, row + 1, col, currentPath, currentPathLength);
	}

	if (isFree(labirinth, row, col+1))
	{
		findAllPaths(labirinth, row, col+1, currentPath, currentPathLength);
	}

	if (isFree(labirinth, row - 1, col))
	{
		findAllPaths(labirinth, row - 1, col, currentPath, currentPathLength);
	}

	if (isFree(labirinth, row, col - 1))
	{
		findAllPaths(labirinth, row, col - 1, currentPath, currentPathLength);
	}

	markUnmarkCell(labirinth, row, col, false);
	currentPathLength--;
	currentPath[currentPathLength] = 0;
	return ;
}

int main() {
	char labirinth[MAX_SIZE][MAX_SIZE] = {
		{EMPTY,WALL,EMPTY, FINAL, WALL, EMPTY ,EMPTY },
		{EMPTY,WALL,EMPTY, EMPTY, WALL, EMPTY ,EMPTY },
		{EMPTY,WALL,EMPTY, EMPTY, WALL, EMPTY ,EMPTY },
		{EMPTY,EMPTY,EMPTY, EMPTY, EMPTY, EMPTY ,EMPTY },
		{WALL,EMPTY, WALL, EMPTY, EMPTY ,EMPTY, EMPTY },
		{EMPTY,EMPTY, WALL, EMPTY, EMPTY ,EMPTY, EMPTY },
		{EMPTY,EMPTY, WALL, EMPTY, EMPTY ,EMPTY, EMPTY }};
	
	int currentPath[MAX_SIZE*MAX_SIZE] = { 0 };

	findAllPaths(labirinth, 0, 0, currentPath, 0);

	for (int i = 0; i < minPathLength; i++)
	{
		cout << minPath[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}