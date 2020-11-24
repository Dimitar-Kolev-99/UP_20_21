#include <iostream>
#include <string>

using namespace std;

bool isPalindromeRec(string word, int start, int end){
	if(start == end) {
		return true;
	}
	else if(word[start] != word[end]) {
		return false;
	}
	else if(start < end + 1) {
		return isPalindromeRec(word,start+1,end-1);
	}
	else {
		return true;
	}
}

bool isPalindrome(string word){
	int n = word.length();
	return isPalindromeRec(word,0,n-1);
}

int task6() {
	string word1 = "abba";
	string word2 = "aba";
	string word3 = "word";
	string word4 = "abvcba";
	cout << isPalindrome(word1) << endl;
	cout << isPalindrome(word2) << endl;
	cout << isPalindrome(word3) << endl;
	cout << isPalindrome(word4) << endl;
	return 0;
}