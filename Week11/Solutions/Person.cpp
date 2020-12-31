#include "Person.h"

Person::Person() {
	setFirstName("John");
	setLastName("Doe");
	setAddress("Unknown");
	setBirthdate("01-01-1970");
	setSpecies("Human");
}

Person::Person(string firstName, string lastName, string address, string birthdate, int age) : Mammal(age) {
	setFirstName(firstName);
	setLastName(lastName);
	setAddress(address);
	setBirthdate(birthdate);
	setSpecies("Human");
}

Person::Person(const char* firstName, const char* lastName, const char* address, const char* birthdate, int age) : Mammal(age) {
	setFirstName(firstName);
	setLastName(lastName);
	setAddress(address);
	setBirthdate(birthdate);
	setSpecies("Human");
}

void Person::setFirstName(string firstName) {
	this->firstName = firstName;
	generateFullName();
}

void Person::setFirstName(const char* firstName) {
	this->firstName = firstName;
	generateFullName();
}

void Person::setLastName(string lastName) {
	this->lastName = lastName;
	generateFullName();
}

void Person::setLastName(const char* lastName) {
	this->lastName = lastName;
	generateFullName();
}

void Person::setFullName(string fullName) {
	this->fullName = fullName;
}

void Person::setFullName(const char* fullName) {
	this->fullName = fullName;
}

void Person::setAddress(string address) {
	this->address = address;
}

void Person::setAddress(const char* address) {
	this->address = address;
}

void Person::setBirthdate(string birthdate) {
	this->birthdate = birthdate;
}

void Person::setBirthdate(const char* birthdate) {
	this->birthdate = birthdate;
}

const string Person::getFirstName() {
	return this->firstName;
}

const string Person::getLastName() {
	return this->lastName;
}

const string Person::getFullName() {
	return this->fullName;
}

const string Person::getAddress() {
	return this->address;
}

const string Person::getBirthdate() {
	return this->birthdate;
}

void Person::generateFullName()
{
	this->fullName = this->firstName + " " + this->lastName;
}

void Person::sayHello() {
	cout << "Hello, my name is " << this->fullName << ". I am born on "
		<< birthdate << " and I am " << getAge() << " years old. I live on " << address << endl;
}
