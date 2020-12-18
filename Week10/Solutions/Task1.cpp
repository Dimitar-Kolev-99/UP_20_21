#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int c = a;
	a = b;
	b = c;
}

int task1() {
	int a = 1, b = 10;
	cout << "Before swap: " << a << " " << b << endl;
	swap(a, b);
	cout << "After swap: " << a << " " << b << endl;
	system("pause");
	return 0;
}