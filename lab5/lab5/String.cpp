#include "String.h"
#include <iostream>
#include <cassert>

void String::invariant(){
	assert(strSize <= strCapacity);
}

String::~String(){
	if (str) {
		delete str;
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
	memcpy(str, rhs.data(), strSize);
	invariant();
}

String::String(const char* cstr) {
	this->strSize = strlen(cstr);
	this->strCapacity = strSize * 2;
	str = new char[strSize];
	memcpy(str, cstr, strSize);
	invariant();
}

String& String::operator=(const String& rhs){
	strCapacity = rhs.capacity();
	strSize = rhs.size();
	memcpy(str, rhs.data(), rhs.size());
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
	if (strSize != strCapacity) {
		str[strSize + 1] = c;
		strSize++;
	}
	else {
		char* strCpy = str;
		this->strSize = this->size();
		this->strCapacity = strSize * 2;
		str = new char[strCapacity];
		memcpy(str, strCpy, strSize);
		strSize++;
	}
}

const char* String::data() const{
	return str;
}

bool operator==(const String& lhs, const String& rhs){
	return strcmp(lhs.data(), rhs.data());
}

bool operator!=(const String& lhs, const String& rhs){
	if (lhs.data() == rhs.data()){
		return false;
	}
	return true;
}

std::ostream& operator<<(std::ostream& out, const String& rhs){
	for(size_t i = 0; i < rhs.size(); ++i)
		out << rhs[i];
	return out;
}

