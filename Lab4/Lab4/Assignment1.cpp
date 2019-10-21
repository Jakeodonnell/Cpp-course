#include "Assignment1.h"
#include <iostream>     
#include <algorithm>    
#include <vector>
#include <numeric>

using namespace std;

Assignmnet1::Assignmnet1() {
}

void Assignmnet1::doAssignment1() {
	vector<int> vec(10);
	int r = rand();
	int size = 10;

	//1a----------------------------------------------
	cout << "Vector unsorted: ";
	iota(vec.begin(), vec.end(), r);
	random_shuffle(vec.begin(), vec.end());
	for (auto i = vec.begin(); i != vec.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;
	sort(vec.begin(), vec.end());
	cout << "Vector sorted: ";
	for (auto i = vec.begin(); i != vec.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;



	//1b----------------------------------------------
	int arr[10];
	cout << "Array unsorted: ";
	iota(arr, arr + size, r);
	random_shuffle(arr, arr + size);
	for (auto i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

	sort(arr, arr + size);
	cout << "Array sorted: ";
	for (auto i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

	//1c----------------------------------------------
	cout << "Vector unsorted: ";
	random_shuffle(vec.begin(), vec.end());
	for (auto i = vec.begin(); i != vec.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;

	sort(vec.rbegin(), vec.rend());
	cout << "Vector revese sorted (rbegin, rend): ";
	for (auto i = vec.begin(); i != vec.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;

	//1d----------------------------------------------
	random_shuffle(arr, arr + size);
	for (auto i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}

	cout << endl;
	
	sort(arr, arr + size, Greater);
	for (auto i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

}


bool Assignmnet1::Greater(int x, int y) {
	return x > y;
}
