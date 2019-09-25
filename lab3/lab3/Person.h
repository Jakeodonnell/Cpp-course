#ifndef PERSON_H
#define PERSON_H

class Person {
	std::string name;
	std::string address;

public:
	Person();
	virtual ~Person();

	Person(std::string name, std::string address);

	std::string getName();

	std::string getaddress();

	void virtual Print();
};

#endif
