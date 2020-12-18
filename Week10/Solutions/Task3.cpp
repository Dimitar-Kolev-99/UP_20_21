#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

void printMatrix(int** matrix, int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
}

void multiplyWithScalar(int** matrix, int rows, int columns, int scalar) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			matrix[i][j] *= scalar;
		}
	}
}

int task3() {
	srand(time(NULL));
	const int rows = 3;
	const int columns = 4;
	int** matrix = new int*[rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new int[columns];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			matrix[i][j] = rand() % 10;
		}
	}

	printMatrix(matrix, rows, columns);
	cout << endl;
	multiplyWithScalar(matrix, rows, columns, 5);
	cout << endl;
	printMatrix(matrix, rows, columns);

	for (int i = 0; i < rows; i++) {
		delete[] matrix[i];
	}

	delete[] matrix;
	system("pause");
	return 0;
}