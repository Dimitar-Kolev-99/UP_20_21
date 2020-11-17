#include <iostream>
using namespace std;

long my_pow(int base, int power) {
	int mult = 1;
	for (int i = 1; i <= power; i++) {
		mult *= base;
	}
	return mult;
}

int task4() {
	cout << my_pow(2, 10) << endl;
	cout << my_pow(2, 4) << endl;
	cout << my_pow(3, 3) << endl;
	cout << my_pow(3, 0) << endl;
	system("pause");
	return 0;
}