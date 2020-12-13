#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void printUsers(vector<string>& usernames, vector<string>& passwords) {
	int size = usernames.size();
	for (int i = 0; i < size; i++) {
		cout << usernames[i] << " " << passwords[i] << endl;
	}
}

void loadingUsersFromFile(const char* fileName, vector<string>& usernames, vector<string>& passwords) {
	ifstream input;
	char data[100];
	input.open(fileName);
	while (input.peek() > 0) {
		input.getline(data, 100);
		string row = data;
		int indexOfFirstSpace = row.find(" ");
		int indexOfSecondSpace = row.find(" ", indexOfFirstSpace + 1);
		string username = row.substr(0, indexOfFirstSpace);
		string password = row.substr(indexOfFirstSpace + 1, indexOfSecondSpace - indexOfFirstSpace - 1);
		usernames.push_back(username);
		passwords.push_back(password);
	}
	input.close();
}

int findIndexByUsername(vector<string> usernames, string username) {

	for (int i = 0; i < usernames.size(); i++) {
		if (usernames[i] == username) {
			return i;
		}
	}
	return -1;

}

bool isUserValid(vector<string> usernames, vector<string> passwords, string username, string password) {
	int indexOfUsername = findIndexByUsername(usernames, username);
	if (indexOfUsername == -1) {
		cout << "There is no such user\n";
		return false;
	}
	else if (passwords[indexOfUsername] != password) {
		cout << "Wrong password!\n";
		return false;
	}
	return true;
}

int task2_1() {
	vector<string> usernames, passwords;
	string username, password;
	cout << "Loading users...\n";
	loadingUsersFromFile("users.dat", usernames, passwords);
	cout << "Users loaded successfuly!\n";
	system("cls");

	cout << "Username: ";
	cin >> username;

	cout << "Password: ";
	cin >> password;

	if (isUserValid(usernames, passwords, username, password)) {
		cout << "You have logged in successfuly!" << endl;
	}

	system("pause");
	return 0;
}