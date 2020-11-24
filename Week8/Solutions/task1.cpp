#include <iostream>

using namespace std;

int findSum(int array[], int length, int index){
	if (index == length){
		return 0;
	}
	return array[index] + findSum(array,length,index+1);
}

int task1()
{
	int array[] = {1,2,3,4};
	cout << findSum(array,4,0)<<endl;
	return 0;
}