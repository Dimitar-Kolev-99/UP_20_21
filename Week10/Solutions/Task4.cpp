#include <iostream>
using namespace std;
int _size = 0;
int _capacity = 10;
int* my_vector;

void copyDataFromMyVector(int* temp) {
	for (int i = 0; i < _size; i++) {
		temp[i] = my_vector[i];
	}
}

void resize() {
	_capacity *= 2;
	int* temp = new int[_capacity];
	copyDataFromMyVector(temp);
	delete[] my_vector;
	my_vector = temp;
}

void addElement(int &element) {
	if (_size == _capacity) {
		resize();
	}
	my_vector[_size++] = element;
}

int findElement(int &element) {
	for (int i = 0; i < _size; i++) {
		if (my_vector[i] == element) {
			return i;
		}
	}
	return -1;
}

void removeWithIndex(int index) {
	if (index < 0 || index >= _size) {
		return;
	}

	for (int i = index; i < _size - 1; i++) {
		my_vector[i] = my_vector[i + 1];
	}
	_size--;
}

void removeWithElement(int element) {
	int index = findElement(element);
	if (index == -1) {
		return;
	}
	removeWithIndex(index);
}

void printVector() {
	for (int i = 0; i < _size; i++) {
		cout << my_vector[i] << " ";
	}
	cout << endl;
}

int task4() {
	my_vector = new int[_capacity];

	for (int i = 0; i < 10; i++) {
		addElement(i);
	}

	system("pause");
	return 0;
}