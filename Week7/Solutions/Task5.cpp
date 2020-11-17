#include <iostream>
using namespace std;

int fibonacci(int index) {
	if (index < 0) {
		return -1;
	}
	else if (index == 0) {
		return 0;
	}
	else if (index == 1) {
		return 1;
	}
	else {
		int previous = 0;
		int current = 1;
		int temp;
		for (int i = 2; i <= index; i++) {
			temp = current;
			current += previous;
			previous = temp;
		}
		return current;
	}
}

int task5() {
	cout << fibonacci(0) << endl;
	cout << fibonacci(1) << endl;
	cout << fibonacci(2) << endl;
	cout << fibonacci(3) << endl;
	cout << fibonacci(10) << endl;
	system("pause");
	return 0;
}