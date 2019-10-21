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
	~PersonReg();
	/*
	 * Adds person object to array
	*/
	void addPerson(Person* personPtr);

	/*
	 * Removes person
	*/
	void removePerson(Person* person);

	Person* freeTextSearch(std::string name, Person* person);

	Person* searchPerson(std::string name);

	bool ReadReg(PersonReg* reg, std::string fileName);

	void printAllPersons();

	Person* begin();
	Person* end();
};
#endif