#include "Mammal.h"

using namespace std;

Mammal::Mammal()
{
	setAge(0);
}

Mammal::Mammal(int age)
{
	setAge(age);
}

const int Mammal::getAge()
{
	return this->age;
}

void Mammal::setAge(const int age)
{
	if (age < 0) {
		cout << "Age cannot be negative number!" << endl;
		this->age = 0;
	}
	else {
		this->age = age;
	}
}

void Mammal::setSpecies(const char * s)
{
	species = s;
}

string Mammal::getSpecies()
{
	return species;
}
