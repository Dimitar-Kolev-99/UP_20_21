#pragma once
#include <iostream>
#include <string>

struct Mammal {
private:
	int age;
	std::string species;

public:
	Mammal();

	Mammal(int age);

	const int getAge();
	void setAge(const int age);
	void setSpecies(const char* s);
	std::string getSpecies();
};