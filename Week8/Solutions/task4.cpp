#include <iostream>

using namespace std;

long long factorial(int n){
	if(n <= 1){
		return 1;
	}
	return n * factorial(n-1);
}

int task4(){
	cout << factorial(10) << endl;
	cout << factorial(5) << endl;
	cout << factorial(0) << endl;
	cout << factorial(6) << endl;
	cout << factorial(20) << endl;
	return 0;
}