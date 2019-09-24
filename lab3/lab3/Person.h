#ifndef PERSON_H
#define PERSON_H

class Person {
	std::string name;
	std::string address;

public:
	Person();
	Person(std::string name, std::string address);

	std::string getName();

	std::string getaddress();

	void Print();
};

#endif
