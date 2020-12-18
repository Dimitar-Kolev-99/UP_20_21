#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
unsigned int _size = 0;
unsigned int _capacity = 2;
int* myVector = new int[_capacity];

void _copyData(int* temp) {
	for (int i = 0; i < _size; i++) {
		temp[i] = myVector[i];
	}
}

void _changeSize(int newCapacity) {
	_capacity = newCapacity;
	int * temp = new int[_capacity];
	_copyData(temp);
	delete[] myVector;
	myVector = temp;
}

void _resize() {
	_changeSize(_capacity * 2);
}

void _shrink() {
	_changeSize(_capacity / 2);
}

void _addElement(int& newElement) {
	if (_size == _capacity) {
		_resize();
	}
	myVector[_size++] = newElement;
}

void _removeElementByIndex(int index) {
	if (index >= _size || index < 0) {
		return;
	}
	for (int i = index; i < _size - 1; i++) {
		myVector[i] = myVector[i + 1];
	}
	_size--;
	if (_size * 4 < _capacity) {
		_shrink();
	}
}

int _findElement(int element) {
	for (int i = 0; i < _size; i++) {
		if (myVector[i] == element) {
			return i;
		}
	}
	return -1;
}

void _removeElementByValue(int& value) {
	int index = _findElement(value);
	if (value == -1) {
		return;
	}
	_removeElementByIndex(index);
}

void _print() {
	for (int i = 0; i < _size; i++) {
		cout << setw(4) << myVector[i];
	}
	cout << endl;
}

int task4a() {
	for (int i = 0; i < 10; i++) {
		_addElement(i);
	}
	_print();
	_removeElementByIndex(0);
	cout << _capacity << endl;
	_removeElementByIndex(0);
	cout << _capacity << endl;
	_removeElementByIndex(0);
	cout << _capacity << endl;
	_removeElementByIndex(0);
	cout << _capacity << endl;
	_removeElementByIndex(0);
	cout << _capacity << endl;
	_removeElementByIndex(0);
	cout << _capacity << endl;
	_removeElementByIndex(0);
	cout << _capacity << endl;
	_removeElementByIndex(0);
	_print();
	cout << _capacity << endl;
	delete[] myVector;
	system("pause");
	return 0;
}