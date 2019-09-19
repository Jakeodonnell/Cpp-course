#include "lab2.h"
#include <iostream>
#include <string>


void Lab2::Assignment1(){
	    // N = elements in the array
		const int N = 10;
		int Nmove = N;
		int arrayOfNumbers[N];
		int counter = 0;
		std::cout << "prime numbers: " << std::endl;

		//add N numbers from 2.
		for (int i = 2; i < N + 2; i++) {
			arrayOfNumbers[counter] = i;
			std::cout << "|" << arrayOfNumbers[counter] << "|";
			counter++;
		}
		std::cout << std::endl;

		//remove even nmumbers.
		for (int i = 0; i < N; i++) {
			if (((arrayOfNumbers[i] % 2) == 0) && (arrayOfNumbers[i] > 2)) {
				for (int j = i; j < Nmove; j++) {
					arrayOfNumbers[j] = arrayOfNumbers[j + 1];
				}
				Nmove--;
			}
		}

		arrayOfNumbers[Nmove] = '\0';

		//Print numbers in array
		for (int i = 0; i < Nmove; i++) {
			std::cout << "|" << arrayOfNumbers[i] << "|";
		}
		std::cout << std::endl;


		//Check modded array with only odd numbers.
		for (int i = 0; i < Nmove; i++) {
			for (int j = i; j < Nmove; j++) {
				//What number in the array is a multiple of arrayOfNumbers[i], remove them.
				if (arrayOfNumbers[j] != arrayOfNumbers[i] && arrayOfNumbers[j] % arrayOfNumbers[i] == 0) {
					for (int k = j; k < Nmove; k++) {
						arrayOfNumbers[k] = arrayOfNumbers[k + 1];
					}
					Nmove--;
				}
			}
		}

		//Final array of numbers(should be primes only)
		std::cout << "primes: ";
		for (int i = 0; i < Nmove; i++) {
			std::cout << "|" << arrayOfNumbers[i] << "|";
		} 
}

void Lab2::Assignment2(std::string &iostring, const std::string &before, const std::string &after) {
	int prevAddress = 0;
	//found!=std::string::npos means "until the end of the string".
	std::size_t found = iostring.find(before);
	while(found!=std::string::npos && found != prevAddress) {
		iostring.replace(iostring.find(before), before.length(), after);
		found = iostring.find(before);
		if(prevAddress != found) {
			prevAddress = found;
		}
	}
}

char* Lab2::Assignment3(const char* input, const char before, const char* after) {
	std::cout << input << "\n" << before << "\n\n" <<  after << std::endl;
	int calculatedLength = strlen(input);

	for (int i = 0; i < strlen(input); i++) {
		if (input[i] == before) {
			calculatedLength += (strlen(after) - 1);
		}
	}

	char* newArray = new char[calculatedLength + 1];

	for (int i = 0, j = 0; i < strlen(input), j < calculatedLength; i++) {
		
		if (input[i] == before) {
			for (int k = 0; k < strlen(after); k++, j++) {
				newArray[j] = after[k];
			
			}
		}
		else if(input[i] != before){
			newArray[j] = input[i];
			j++;
		}
	}

	newArray[calculatedLength] = '\0';

	for (int i = 0; i < calculatedLength; i++) {
		std::cout << newArray[i];
	}

	std::cout << "\nLength before " << strlen(input) << "\nNew length var: "<< calculatedLength << std::endl;
	return newArray;
}