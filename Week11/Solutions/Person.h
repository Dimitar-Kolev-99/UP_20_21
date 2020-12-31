#pragma once
#include "Mammal.h"
#include <string>

using namespace std;

struct Person : Mammal{
private:
	string firstName = "";
	string lastName = "";
	string fullName;
	string address;
	string birthdate;

public:

	Person();
	Person(string firstName, string lastName, string address, string birthdate, int age);
	Person(const char* firstName, const char* lastName, const char* address, const char* birthdate, int age);

	void setFirstName(string firstName);
	void setFirstName(const char* firstName);
	void setLastName(string lastName);
	void setLastName(const char* lastName);
	void setFullName(string fullName);
	void setFullName(const char* fullName);
	void setAddress(string address);
	void setAddress(const char* address);
	void setBirthdate(string birthdate);
	void setBirthdate(const char* birthdate);

	const string getFirstName();
	const string getLastName();
	const string getFullName();
	const string getAddress();
	const string getBirthdate();

	void generateFullName();

	void sayHello();
};