#include <iostream>
using namespace std;

double calculateDistance(int x1, int y1, int x2, int y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int task6() {
	cout << calculateDistance(3, 4, 0, 0) << endl;
	system("pause");
	return 0;
}