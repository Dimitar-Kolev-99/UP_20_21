#include <iostream>
#include <vector>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

vector<vector<int>> multiplyMatrix(vector<vector<int>> firstMatrix, vector<vector<int>> secondMatrix) {
	try {
		if (firstMatrix[0].size() != secondMatrix.size()) {
			throw "Invalid action!";
		}
	}
	catch (const char* msg) {
		cout << msg << endl;
		vector<vector<int>> empty;
		return empty;
	}
	int n = firstMatrix.size();
	int m = firstMatrix[0].size();
	int l = secondMatrix[0].size();
	vector<vector<int>> multipliedMatrix(n, vector<int>(l));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < m; k++) {
				multipliedMatrix[i][j] +=
					firstMatrix[i][k] * secondMatrix[k][j];
			}
		}
	}
	return multipliedMatrix;
}

void printMatrix(vector<vector<int>> matrix) {
	if (matrix.size() == 0) {
		cout << "Matrix is empty" << endl;
		return;
	}
	int rows = matrix.size();
	int columns = matrix[0].size();
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

vector<vector<int>> generateMatrix(int rows, int columns) {
	vector<vector<int>> matrix(rows, vector<int>(columns, 0));
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			matrix[i][j] = rand() % 15 + 1;
		}
	}
	return matrix;
}

int task7() {
	srand(time(NULL));
	vector<vector<int>> firstMatrix = generateMatrix(2, 3);
	vector<vector<int>> secondMatrix = generateMatrix(4, 3);
	printMatrix(firstMatrix);
	printMatrix(secondMatrix);
	vector<vector<int>> multipliedMatrix = multiplyMatrix(firstMatrix, secondMatrix);
	printMatrix(multipliedMatrix);
	system("pause");
	return 0;
}