#include <iostream>
#include <string>

using namespace std;

void reverse(string letters){
	if(letters.size() == 0){
		return;
	}
	reverse(letters.substr(1));
	cout << letters[0];
}

int task5 (){
	string word = "Hello";
	reverse(word);
	cout << endl;
	return 0;
}