#include <iostream>
#include "Person.h"


//Default consturctor
Person::Person() {
}

Person::Person(std::string firstName, std::string lastName, std::string address){
	this->firstName = firstName;
	this->lastName = lastName;
	this->address = address;
}

std::string Person::getfirstName() {
	return firstName;
}

std::string Person::getlastName() {
	return  lastName;
}

std::string Person::getaddress() {
	return  address;
}

void Person::Print() {
	std::cout << "\n PERSON INFO" << "\nFirst name: " << firstName << "\nLast name: " << lastName << "\nAddress: " << address << std::endl;
}