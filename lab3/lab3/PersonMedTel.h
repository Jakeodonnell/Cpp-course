#ifndef PERSONMEDTEL_H
#define PERSONMEDTEL_H
#include "Person.h"
#include <string>

class PersonMedTel: public Person {
	std::string number;
public:
	PersonMedTel();
	~PersonMedTel();

	PersonMedTel(std::string name, std::string address, std::string number);

	std::string getName();

	std::string getaddress();

	std::string getnumber();

	void Print();
};

#endif
