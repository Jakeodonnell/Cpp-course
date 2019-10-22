#include "String.h"
#include <iostream>
#include <cassert>
#include <exception>

void String::invariant(){
	assert(strSize <= strCapacity);
}

String::~String(){
	if (str) {
		delete[] str;	
		str = nullptr;
	}
}

String::String() {
	str = new char[DEFAULT_CAPACITY];
	this->strSize = 0;
	this->strCapacity = DEFAULT_CAPACITY;
	invariant();
}

String::String(const String& rhs){
	this->strSize = rhs.size();
	this->strCapacity = rhs.capacity();
	str = new char[strSize];
	for (int i = 0; i < strSize; i++) {
		str[i] = rhs[i];
	}
	invariant();
}

String::String(const char* cstr) {
	this->strSize = strlen(cstr);
	this->strCapacity = strSize * 2;
	str = new char[strSize];
	for (int i = 0; i < strSize; i++) {
		str[i] = cstr[i];
	}
	invariant();
}

String& String::operator=(const String& rhs){
	if (strCapacity > rhs.size()) {
		strSize = rhs.size();
		for (int i = 0; i < strSize; i++) {
			str[i] = rhs[i];
		}
	}
	else {
		this->strSize = rhs.size();
		this->strCapacity = strSize;
		str = new char[strCapacity];
		for (int i = 0; i < strSize; i++) {
			str[i] = rhs[i];
		}
	}
	return *this;
}


char& String::operator[](size_t i){
	return str[i];
}

const char& String::operator[](size_t i) const{
	return str[i];
}

size_t String::size() const{
	return strSize;
}

size_t String::capacity() const{
	return strCapacity;
}

void String::push_back(char c){
	if (strSize < strCapacity) {
		str[strSize] = c;
		strSize++;
	}
	else {
		char* strCpy = new char[strCapacity * 2];
		for (int i = 0; i < strSize; i++) {
			strCpy[i] = str[i];
		}
		delete[] str;
		this->strCapacity = strCapacity * 2;
		str = strCpy;
		str[strSize] = c;
		strSize++;
	}
}

const char* String::data() const{
	return str;
}

bool operator==(const String& lhs, const String& rhs) {
	if (lhs.size() == rhs.size()) {
		for (int i = 0; i < lhs.size(); i++) {
			if (lhs[i] != rhs[i]) {
				return false;
			}
		}
		return true;
	}
	return true;
}

bool operator!=(const String& lhs, const String& rhs) {
	if (lhs.data() == rhs.data()) {
		return false;
	}
	return true;
}

std::ostream& operator<<(std::ostream& out, const String& rhs) {
	for (size_t i = 0; i < rhs.size(); ++i)
		out << rhs[i];
	return out;
}

// VG

char& String::at(size_t i){
	if (i > 0 && i < strSize) {
		return str[i];
	}
	throw std::out_of_range("out of range");
}

const char& String::at(size_t i) const{
	if (i > 0 && i < strSize) {
		return str[i];
	}
	throw std::out_of_range("out of range");
}

void String::reserve(size_t i){
	if (i > strCapacity) {
		this->strCapacity = i;
		char* strCpy = new char[strCapacity];
		for (int i = 0; i < strSize; i++) {
			strCpy[i] = str[i];
		}
		delete[] str;
		str = strCpy;
	}
}

void String::shrink_to_fit(){
	if (strSize != strCapacity) {
		this->strCapacity = strSize;
		char* strCpy = new char[strSize];
		for (int i = 0; i < strSize; i++) {
			strCpy[i] = str[i];
		}
		delete[] str;
		str = strCpy;
	}
}

String& String::operator+=(const String& rhs){
	if ((strSize + rhs.size()) > strCapacity) {
		this->strCapacity = strSize;
		char* strCpy = new char[strSize];
		strCpy = str;
		for (int j = 0; j < rhs.size(); j++) {
			strCpy[strSize + j] = rhs[j];
		}
		str = strCpy;

	} else {
		for (int i = 0; i < rhs.size(); i++) {
			str[strSize + i] = rhs[i];
		}
	}
	return *this;
}

String String::operator+(const String& rhs){
	this->strCapacity = strSize;
	char* strCpy = new char[strSize];
	strCpy = str;
	for (int j = 0; j < rhs.size(); j++) {
		strCpy[strSize + j] = rhs[j];
	}
	return String(strCpy);
}

