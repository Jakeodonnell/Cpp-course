#include <iostream>

int main(int argc, char** argv) {
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
		if ((arrayOfNumbers[i] % 2 == 0) && (arrayOfNumbers[i] > 2)) {
			Nmove--;
			for (int j = i; j < N; j++) {
				arrayOfNumbers[j] = arrayOfNumbers[j + 1];
			}
		}
	}


	//Check modded array with only odd numbers.
	for (int i = 0; i < Nmove; i++) {
		std::cout << "|" << arrayOfNumbers[i] << "|";
	}
	std::cout << std::endl;

	for (int i = arrayOfNumbers[0]; i < N + 2; i++) {
		for (int j = arrayOfNumbers[0]; j < sqrt(i); j++) {
			if ((i % j == 0) && (i > 3)) {
				
				break;
			}else if((j + 1) > sqrt(i)){
				std::cout << "add to array " << i << std::endl;
			}
		}
	}
	for (int i = 0; i < Nmove; i++) {
		std::cout << arrayOfNumbers[i] << std::endl;
	}
}
	
	/*for (int i = 2; i < N; i++) {
		for (int j = 2; j * j <= i; j++) {
			std::cout << "i :" << i<< " j :" << j << std::endl;

			if (i % j == 0) {
				std::cout << "i remove " << i << std::endl;
			}
			else if (j + 1 > sqrt(i)) {
				std::cout << "i add to array " << i << std::endl;
			}
		}
	}*/