#ifdef _DEBUG
#ifndef DBG_NEW
#include <stdlib.h>
#include <crtdbg.h>
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#define new DBG_NEW
#endif
#endif  // _DEBUG

#include <iostream>
#include <string>
#include "PersonReg.h"
#include "Person.h"
#include "PersonMedTel.h"
using namespace std;

int main(int argc, char** argv) {
#ifdef DBG_NEW
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif
	int size = 0;
	const int maxSize = 7;

	PersonReg* Preg = new PersonReg(maxSize);
	const std::string fileName = "PersonExempel.txt";
	std::string address;
	std::string searchName;

	Preg->ReadReg(Preg, fileName);
	Person* telePerson = new PersonMedTel("jake", "sunnan", "301892");
	Preg->addPerson(telePerson);


	Preg->printAllPersons();
	cout << "\nSearch name: " << endl;
	getline(cin, searchName);

	Person* foundPerson = Preg->searchPerson(searchName);
	
	if (foundPerson != 0) {
		cout << "---------------FOUND----------------" << endl;
		foundPerson->Print();

		cout << "---------------DELETE----------------"<< endl;
		Preg->removePerson(foundPerson);

		std::cout << "-----------------NEW LIST---------------"<< endl;
		Preg->printAllPersons();
	}
	else {
		std::cout << "Not found\n";
	}


	cout << "\nSearch name: " << endl;
	std::string freeName;
	getline(cin, freeName);

	Person* prev = nullptr;
	Person* curr = Preg->freeTextSearch(freeName, prev);

	while (Preg->freeTextSearch(freeName, prev) != nullptr){
		curr = Preg->freeTextSearch(freeName, prev);
		std::cout << "FOUND: "; 
		Preg->freeTextSearch(freeName, prev)->Print();
		prev = curr;
	}
	delete telePerson;
	delete Preg;
	_CrtDumpMemoryLeaks();
}
	/*
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
	}*/



/*while (size < (maxSize)) {
	size++;
	std::cin >> firstName >> lastName >> address;
	if (size < maxSize) {
		std::cout << "enter firstName, lastName, Address: ";
	}
	Person *per = new Person(firstName, lastName, address);
	Preg->addPerson(per);
}*/

