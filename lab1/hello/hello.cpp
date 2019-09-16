#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv)
{	
	
	cout << "Hello Wolrd! nice to see you, ";

	for(int i = 1; i < argc; i++){
		if((i + 1) == argc){
		cout << argv[i] << "!" << endl;
		} else {
		cout << argv[i] << " ";
		}		
	}
 	
	
	return EXIT_SUCCESS;
}