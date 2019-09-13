#include <iostream>

int main(int argc, char** argv) {
	//(N + 1)
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
	std::cout <<  std::endl;

	//remove even nmumbers.
	for (int i = 0; i < N; i++) {
		if (((arrayOfNumbers[i] % 2) == 0) && (arrayOfNumbers[i] > 2)) {
			for (int j = i; j < Nmove; j++) {
				arrayOfNumbers[j] = arrayOfNumbers[j + 1];
			}
			Nmove--;
		}
	}


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
	
	