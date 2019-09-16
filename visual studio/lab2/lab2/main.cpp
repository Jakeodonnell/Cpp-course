#include <iostream>
#include "lab2.h"
#include <string>

int main(int argc, char** argv) {
	Lab2* l2 = new Lab2();
	int val;
	std::string String1 = "hej pa dej";
	const std::string before1 = "ej";
	const std::string after1 = "ig";

	std::string String2 = "hejjj";
	const std::string before2 = "ej";
	const std::string after2 = "eje";


	const char* String3 = "hej pa dejjj";
	const char before3 = 'e';
	const char* after3 = "aaaa";
	char* result;


	std::cout << "Press 1 for Assignment 1\n" << "Press 2 for Assignment 2\n" << "Press 3 for Assignment 3\n" << std::endl;
	while (std::cin >> val) {
		switch (val)
		{
			
		case 1: val = 1;
			l2->Assignment1();
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "Press 1 for Assignment 1\n" << "Press 2 for Assignment 2\n" << "Press 3 for Assignment 3\n" << std::endl;
			break;

		case 2: val = 2;
			std::cout << "String: " << String1 << "\nBefore: " << before1 << "\nAfter: " << after1 << std::endl;
			l2->Assignment2(String1, before1, after1);
			std::cout << String1 << "\n \n \n";

			std::cout << "String: " << String2 << "\nBefore: " << before2 << "\nAfter: " << after2 << std::endl;
			l2->Assignment2(String2, before2, after2);
			std::cout << String2 << "\n \n \n";
			std::cout << "Press 1 for Assignment 1\n" << "Press 2 for Assignment 2\n" << "Press 3 for Assignment 3\n" << std::endl;
			break;

		case 3: val = 3;

			result = l2->Assignment3(String3, before3, after3);
			std::cout << "RESULT: " << result << "\n\n";
			delete[] result;
			break;
		default:
			std::cout << "Press 1 for Assignment 1\n" << "Press 2 for Assignment 2\n" << "Press 3 for Assignment 3\n" << std::endl;
			break;
		}
	}
}
	
	