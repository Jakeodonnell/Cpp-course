#include <iostream>
#include "PersonReg.h"
#include "Person.h"
#include <string>
using namespace std;

int main(int argc, char** argv) {
	int size = 0;
	const int maxSize = 6;

	PersonReg* Preg = new PersonReg(maxSize);
	const std::string fileName = "PersonExempel.txt";
	std::string address;
	std::string searchName;

	Preg->ReadReg(Preg, fileName);
	Preg->printAllPersons();



	int val;
	Person* foundPerson = Preg->searchPerson(searchName);
	std::cout << "Press 1 for full name search\n" << "Press 2 for free text search\n" << std::endl;
	while (cin >> val) {
		switch (val)
		{
		case 1: val = 1;
			cout << "\nSearch name: " << endl;
			getline(cin, searchName);
			if (foundPerson != 0) {
				cout << "\nPerson exists, Info about that person: " << endl;
				foundPerson->Print();
			}
			else {
				std::cout << "Not found\n";
			}
			break;
		case 2: val = 2;

			break;
		default:
			std::cout << "Press 1 for full name search\n" << "Press 2 for free text search 2\n" << std::endl;
			break;
		}
		delete Preg;
	}
}


/*while (size < (maxSize)) {
	size++;
	std::cin >> firstName >> lastName >> address;
	if (size < maxSize) {
		std::cout << "enter firstName, lastName, Address: ";
	}
	Person *per = new Person(firstName, lastName, address);
	Preg->addPerson(per);
}*/
