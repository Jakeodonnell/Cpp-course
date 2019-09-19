#ifndef LAB2_H
#define LAB2_H
#include <string>

class Lab2 {
public:
	void Assignment1();

	void Assignment2(std::string &iostring, const std::string &before, const std::string &after);

	char* Assignment3(const char* input, const char before, const char* after);
};

#endif