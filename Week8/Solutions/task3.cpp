#include <iostream>

using namespace std;

int countNumbersLargerThanN(int array[], int length, int index,int number){
	if(length == index){
		return 0;
	}
	else if(array[index] > number){
		return 1 + countNumbersLargerThanN(array,length,index+1,number);
	}
	else{
		return countNumbersLargerThanN(array,length,index+1,number);		
	}
}

int task3()
{
	int array[] = {1,2,3,4,5,6};
	cout << countNumbersLargerThanN(array,6,0,1) << endl;
	cout << countNumbersLargerThanN(array,6,0,2) << endl;
	cout << countNumbersLargerThanN(array,6,0,3) << endl;
	cout << countNumbersLargerThanN(array,6,0,4) << endl;
	cout << countNumbersLargerThanN(array,6,0,10) << endl;
	return 0;
}