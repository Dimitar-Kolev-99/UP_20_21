#include <iostream>
using namespace std;

void reverse(int &n) {
	int answer = 0;
	while (n != 0) {
		answer = answer * 10 + n % 10;
		n /= 10;
	}
	n = answer;
}

int task2() {
	int n = 123456;
	cout << "N before reverse: " << n << endl;
	reverse(n);
	cout << "N after reverse: " << n << endl;
	system("pause");
	return 0;
}