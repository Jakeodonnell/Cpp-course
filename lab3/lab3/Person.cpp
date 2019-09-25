#include <iostream>
#include "Person.h"


//Default consturctor
Person::Person() {
}
Person::~Person() {
}

Person::Person(std::string name, std::string address){
	this->name = name;
	this->address = address;
}

std::string Person::getName() {
	return name;
}


std::string Person::getaddress() {
	return  address;
}

void Person::Print() {
	std::cout << "\n PERSON INFO" << "\nname: " << name << "\nAddress: " << address << std::endl;
}


