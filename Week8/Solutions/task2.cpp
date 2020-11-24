#include <iostream>

using namespace std;

int findNumber(int array[], int length, int index, int number){
	if(index == length){
		return -1;
	}
	if(array[index] == number){
		return index;
	}
	return findNumber(array,length,index+1,number);
}

int task2(){
	int array[] = {1,2,3,4,5};
	cout << findNumber(array,5,0,5) << endl;
	cout << findNumber(array,5,0,10) << endl;
	cout << findNumber(array,5,0,3) << endl;
	cout << findNumber(array,5,0,1) << endl;
	return 0;
}