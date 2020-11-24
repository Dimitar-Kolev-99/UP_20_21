#include <iostream>

using namespace std;

int findMaxDiv(int n, int m){
	if(n == m){
		return n;
	}
	else if(n > m) {
		return findMaxDiv(n-m, m);
	}
	else{
		return findMaxDiv(n,m-n);
	}
}

int task7() {
	cout << findMaxDiv(15,5)<<endl;
	cout << findMaxDiv(20,25)<<endl;
	cout << findMaxDiv(3,5)<<endl;
	cout << findMaxDiv(17,13)<<endl;
	cout << findMaxDiv(9,25)<<endl;
	cout << findMaxDiv(15,15)<<endl;
	return 0;
}