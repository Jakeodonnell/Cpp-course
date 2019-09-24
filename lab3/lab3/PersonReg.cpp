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
	std::cout << "destruct";
	if (personsList) {
		delete[] personsList;
		personsList = NULL;
	}
}

void PersonReg::addPerson(Person *personPtr) {
	personsList[size] = *personPtr;
	size++;
}

void PersonReg::removePerson(Person *person) {
	
}

Person* PersonReg::searchPerson(std::string name){
	Person* found = new Person();
	for (Person* personSearched = personsList; personSearched != personsList + maxSize; ++personSearched) {
		std::string name1 = personSearched->getName();
		if (name1 == name) {
			found = personSearched;
			return found;
		}
	}
	return 0;
}

Person* freeTextSearch(std::string name) {
	
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

