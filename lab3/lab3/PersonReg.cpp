#include <iostream>
#include "PersonReg.h"
#include "Person.h"
#include <string>
#include <fstream>

PersonReg::PersonReg(int maxSize) {
	this->maxSize = maxSize;
	this->size = 0;
	//Creates array of persons, the size of the array is maxSize
	this->personsList = new Person[maxSize];
}

PersonReg::~PersonReg() {
	std::cout << "\ndestruct";
	if (personsList) {
		delete[] personsList;
		personsList = NULL;
	}
}

void PersonReg::addPerson(Person *personPtr) {
	personsList[size] = *personPtr;
	size++;
}

void PersonReg::removePerson(Person* person) {
	for (Person* personSearched = personsList; personSearched != personsList + maxSize; ++personSearched) {
		if(personSearched == person){
			for (Person* ptr = personSearched; ptr != personsList + maxSize - 1; ptr++) {
				*ptr = *(ptr + 1);
			}
			maxSize--;
		}
	}
}

Person* PersonReg::freeTextSearch(std::string name, Person* person) {
	int dist;
	if (person == nullptr) {
		dist = 0;
	}
	else {
		dist = std::distance(personsList, person) + 1;
	}
	for (Person* personSearched = personsList + dist; personSearched != personsList + maxSize; ++personSearched) {
		std::string nameCheck = personSearched->getName();
		std::string addressCheck = personSearched->getaddress();

		std::size_t foundName = nameCheck.find(name);
		std::size_t foundAddress = addressCheck.find(name);

		if (foundName != std::string::npos || foundAddress !=std::string::npos) {
			return personSearched;
		}
	}
	return nullptr;
}

Person* PersonReg::searchPerson(std::string name) {
	for (Person* personSearched = personsList; personSearched != personsList + maxSize; ++personSearched) {
		std::string name1 = personSearched->getName();
		if (name1 == name) {
			return personSearched;
		}
	}
	return 0;
}


void PersonReg::printAllPersons() {
	for (Person* ptr = personsList; ptr != personsList + maxSize; ++ptr){
		ptr->Print();
	}
}

bool PersonReg::ReadReg(PersonReg* reg, std::string fileName) {
	std::string line;
	std::ifstream myfile(fileName);
	if (myfile.is_open()) {
		while (getline(myfile, line)) {
			while (line.length() == 0 && getline(myfile, line));
			std::string name(line);
			std::string adress; getline(myfile, adress);
			reg->addPerson(&Person(name, adress));
		}
		myfile.close();
		return true;
	}
	else {
		std::cout << "Unable to open file"; return false;
	}
}

