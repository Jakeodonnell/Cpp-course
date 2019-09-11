#include <iostream>

int main(int argc, char** argv) {
	const int N = 20;
	int counter1 = 0;
	int counter2 = 0;
	int arrayOfNumbers[N];
	std::cout << "prime numbers: " << std::endl;

	for (int i = 0; i < N + 1; i++) {
		arrayOfNumbers[i] = counter1;
		counter1++;
		std::cout << arrayOfNumbers[i] << std::endl;
	}

	for (int i = 2; i < 100; i++)
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
				break;
			else if (j + 1 > sqrt(i)) {
				std::cout << i << " ";

			}

		}
		

	}
	for (int i = 0; i < N + 1; i++) {
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