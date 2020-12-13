#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int task1() {
	string username;
	string password;
	string email;

	cout << "Username: ";
	cin >> username;
	cout << "Password: ";
	cin >> password;
	cout << "Email: ";
	cin >> email;

	ofstream output;
	output.open("users.dat", ios::app);
	output << username << " " << password << " " << email << endl;
	output.close();

	cout << "User registered successfuly!\n";
	system("pause");
	return 0;
}