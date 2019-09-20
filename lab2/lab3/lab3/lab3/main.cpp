#include <iostream>
#include "PersonReg.h"
#include "Person.h"

int main(int argc, char** argv){
	
	int size = 0;
	int maxSize;

	std::cout << "enter array size: ";
	std::cin >> maxSize;

	PersonReg* Preg = new PersonReg(maxSize);
	std::string firstName;
	std::string lastName;
	std::string address;

	std::cout << "enter firstName, lastName, Address: ";
	while (size < (maxSize)) {
		size++;
		std::cin >> firstName >> lastName >> address;
		if (size < maxSize) {
			std::cout << "enter firstName, lastName, Address: ";
		}
		Person *per = new Person(firstName, lastName, address);
		Preg->addPerson(per);
	}
	Preg->printAllPersons();
}