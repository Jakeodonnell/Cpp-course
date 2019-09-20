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

void PersonReg::removePerson(Person *persons) {

}

Person* PersonReg::searchPerson(std::string name){
	return 0;
}

void PersonReg::printAllPersons() {
	for (Person* ptr = personsList; ptr != personsList + maxSize; ++ptr){
		ptr->Print();
	}
}
