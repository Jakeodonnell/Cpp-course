#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int val;
	int tot = 0;

	cout << "sum: " << tot << "\n"<<  "enter value: ";
	while(cin >> val){
		tot = tot + val;
		cout << "sum: " << tot << "\n"<<  "enter value: ";
		
	}
	return EXIT_SUCCESS;
}