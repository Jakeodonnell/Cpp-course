#ifndef PERSON_H
#define PERSON_H

class Person {
	std::string firstName;
	std::string lastName;
	std::string address;

public:
	Person();
	Person(std::string firstName, std::string lastName, std::string address);

	std::string getfirstName();

	std::string getlastName();

	std::string getaddress();

	void Print();
};

#endif
