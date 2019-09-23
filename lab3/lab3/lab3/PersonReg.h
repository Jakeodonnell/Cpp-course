#ifndef PERSONREG_H
#define PERSONREG_H
#include "Person.h"

class PersonReg {
	int maxSize;
	int size;
	Person* personsList;
public: 

    /*
	* Constructor, takes maxSize
	*/
	PersonReg(int maxSize);

	/*
	 * Adds person object to array
	*/
	void addPerson(Person *personPtr);

	/*
	 * Removes person
	*/
	void removePerson(Person *person);

	Person* searchPerson(std::string name);

	void printAllPersons();

};
#endif