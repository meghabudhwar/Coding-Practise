#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the size of array";
	cin >> n;

	//allocate memory of 1D array on heap memory
	int* ptr = new int[n];

	//read elements in the 1D array
	for(int i=0 ; i<n ; i++) {
		cin >> ptr[i];
	}

	//access elements of the 1D array
	for(int i=0 ; i<n ; i++) {
		cout << ptr[i] << " " << *(ptr+i) << endl;

	}

	//deallocate memory of 1D memory
	delete [] ptr;
	
	return 0;
}