#pragma once
#include <ostream>
class String {
private:
	char* str;
	size_t DEFAULT_CAPACITY = 10;
	size_t strSize;
	size_t strCapacity;
	void invariant();
public:
	~String();
	String();
	String(const String& rhs);
	String(const char* cstr);
	String& operator=(const String& rhs);
	char& operator[](size_t i);
	const char& operator[](size_t i)const;
	size_t size() const;
	size_t capacity() const;
	void push_back(char c);
	friend bool operator==(const String& lhs, const String& rhs);
	friend bool operator != (const String& lhs, const String& rhs);
	const char* data() const;
	friend std::ostream& operator<< (std::ostream& out, const String& rhs);

	//VG
	char& at(size_t i);
	const char& at(size_t i) const;
	void reserve(size_t);
	void shrink_to_fit();
	String& operator+=(const String& rhs);
	String operator+(const String& rhs);
};