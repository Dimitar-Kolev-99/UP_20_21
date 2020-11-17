#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findLargest(vector<int> numbers) {
	int size = numbers.size();
	if (size == 0) {
		return -1;
	}
	int max = INT_MIN;
	for (int i = 0; i < size; i++) {
		if (numbers[i] > max) {
			max = numbers[i];
		}
	}
	return max;
}

int task3main() {
	vector<int> numbers;
	cout << findLargest(numbers) << endl;
	numbers.push_back(3);
	numbers.push_back(5);
	numbers.push_back(1);
	numbers.push_back(2);
	cout << findLargest(numbers) << endl;
	system("pause");
	return 0;
}