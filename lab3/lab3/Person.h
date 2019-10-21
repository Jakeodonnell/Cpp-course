#ifndef PERSON_H
#define PERSON_H

class Person {
protected:
	std::string name;
	std::string address;

public:
	Person();
	virtual ~Person();

	Person(std::string name, std::string address);

	std::string getName();

	std::string getaddress();

	bool operator<(const Person& that);

	void virtual Print();
};

#endif
