#include <iostream>
#include "PersonMedTel.h"


//Default consturctor
PersonMedTel::PersonMedTel() {
}
PersonMedTel::~PersonMedTel() {
	
}

PersonMedTel::PersonMedTel(std::string name, std::string address, std::string number) {
	this->name = name;
	this->address = address;
	this->number = number;
}

std::string PersonMedTel::getName() {
	return name;
}

std::string PersonMedTel::getaddress() {
	return  address;
}

std::string PersonMedTel::getnumber() {
	return  number;
}

void PersonMedTel::Print() {
	std::cout << "\n PERSON INFOTELE" << "\nname: " << name << "\nAddress: " << address << "\nNumber: " << number <<  std::endl;
}


