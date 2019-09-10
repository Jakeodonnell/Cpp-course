#include <iostream>

int main(int argc, char** argv) {
	const int N = 50;
	int arrayOfNumbers[N];
	int counter = 0;
	std::cout << "prime numbers: " << std::endl;

	for (int i = 2; i < N; i++) {
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
			}
			else if (j + 1 > sqrt(i)) {
				arrayOfNumbers[counter] = i;
				std::cout << arrayOfNumbers[counter] << std::endl;
			}
		}
		
		counter++;
	}
}
	