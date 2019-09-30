#include <iostream>     
#include <algorithm>    
#include <vector>

using namespace std;
bool Greater(int x, int y);

int main() {
	vector<int> vec;
	int r;
	int size = 10;
	//1a
	cout << "Vector unsorted: ";
	for (int i = 0; i < size; i++) {
		r = rand() % 100;
		vec.push_back(r);
	}

	for (auto i = vec.begin(); i != vec.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;

	sort (vec.begin(), vec.end());
	cout << "Vector sorted: ";
	for (auto i = vec.begin(); i != vec.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;

	//1b
	int arr[10];
	cout << "Array unsorted: ";
	for (int i = 0; i < size; i++) {
		r = rand() % 100;
		arr[i] = r;
	}
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

	//1c
	vec.clear();
	cout << "Vector unsorted: ";
	for (int i = 0; i < size; i++) {
		r = rand() % 100;
		vec.push_back(r);
	}

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

	//1d
	for (int i = 0; i < size; i++) {
		r = rand() % 100;
		arr[i] = r;
	}
	for (auto i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < size; i++) {
		
	}
}

bool Greater(int x, int y) { 
	return x > y; 
}
