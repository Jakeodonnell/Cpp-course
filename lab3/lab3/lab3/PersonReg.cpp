#include <iostream>
#include "PersonReg.h"
#include "Person.h"

PersonReg::PersonReg(int maxSize) {
	this->maxSize = maxSize;
	this->size = 0;
	//Creates array of persons, the size of the array is maxSize
	this->personsList = new Person[maxSize];
}

void PersonReg::addPerson(Person *personPtr) {
	personsList[size] = *personPtr;
	size++;
}

void PersonReg::removePerson(Person* persons) {
	for (Person* personPtr = personsList; personPtr != personPtr + maxSize; ++personPtr) {
		if (personPtr == persons) {
			delete[] persons;
			break;
		}
	}
}

Person* PersonReg::searchPerson(std::string name){
	return 0;
}

void PersonReg::printAllPersons() {
	for (Person* personPtr = personsList; personPtr != personsList + maxSize; personPtr++){
		personPtr->Print();
	}
}
