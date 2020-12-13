#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void readCountriesFromFile(vector<string>& countries, vector<string>& capitals, vector<int>& populations, ifstream& input) {
	string temp;
	int population;
	while (input.peek() > 0) {
		input >> temp;
		countries.push_back(temp);
		input >> temp;
		capitals.push_back(temp);
		input >> temp;
		int population = stoi(temp);
		populations.push_back(population);
	}
}

int findMaxIndexForPopulation(vector<int>& populations) {
	int maxPopulation = -1;
	int maxIndex = -1;
	for (int i = 0; i < populations.size(); i++) {
		if (populations[i] > maxPopulation) {
			maxPopulation = populations[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}

int task4() {
	vector<string> countries;
	vector<string> capitals;
	vector<int> populations;
	ifstream input;
	input.open("population.dat", ios::app);
	cout << "Loading countries...\n";
	readCountriesFromFile(countries, capitals, populations, input);
	cout << "Loaded successfuly!\n";
	system("cls");
	int maxIndex = findMaxIndexForPopulation(populations);
	if (maxIndex == -1) {
		cout << "Error!" << endl;
	}
	else {
		printf("The country with the biggest population is %s and it's capital is %s.\n",
			countries[maxIndex].c_str(), capitals[maxIndex].c_str());
	}
	system("pause");
	return 0;
}