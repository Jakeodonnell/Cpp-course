#include <iostream>
#include "PersonReg.h"
#include "Person.h"

int main(int argc, char** argv){
	
	int size = 0;
	int maxSize;

	std::cout << "enter array size: ";
	std::cin >> maxSize;

	PersonReg* Preg = new PersonReg(maxSize);
	std::string firstName = "aaa";
	std::string lastName = "bbb";
	std::string address = "ccc";

	std::cout << "enter firstName, lastName, Address: ";
	/*while (size < (maxSize)) {
		size++;
		std::cin >> firstName >> lastName >> address;
		if (size < maxSize) {
			std::cout << "enter firstName, lastName, Address: ";
		}
		Person *per = new Person(firstName, lastName, address);
		Preg->addPerson(per);
	}
	*/
	Person* per = new Person("a", "a", "a");
	Person* per1 = new Person("b", "b", "b");
	Person* per2 = new Person("c", "c", "c");
	Preg->addPerson(per);
	Preg->addPerson(per1);
	Preg->addPerson(per2);
	Preg->removePerson(per);
	Preg->printAllPersons();
}