#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void readUsersFromFile(ifstream& input, vector<string>& usernames, vector<string>& passwords, vector<string>& emails) {
	string temp;
	while (input.peek() > 0) {
		input >> temp;
		usernames.push_back(temp);
		input >> temp;
		passwords.push_back(temp);
		input >> temp;
		emails.push_back(temp);
	}
}

int findIndexByUsername(vector<string>& usernames, vector<string>& passwords, string username, string password) {
	int size = usernames.size();
	for (int i = 0; i < size; i++) {
		if (usernames[i] == username) {
			return i;
		}
	}
	return -1;
}

int task2() {
	vector<string> usernames;
	vector<string> passwords;
	vector<string> emails;

	ifstream input;
	input.open("users.dat");
	cout << "Loading users..." << endl;
	readUsersFromFile(input, usernames, passwords, emails);
	cout << "Users loaded!" << endl;
	system("cls");
	input.close();

	string username;
	string password;

	cout << "Username: ";
	cin >> username;
	cout << "Password: ";
	cin >> password;

	int indexOfUser = findIndexByUsername(usernames, passwords, username, password);

	if (indexOfUser == -1 || passwords[indexOfUser] != password) {
		cout << "Wrong input!" << endl;
	}
	else {
		cout << "Logged in successfuly!" << endl;
	}

	system("pause");
	return 0;
}