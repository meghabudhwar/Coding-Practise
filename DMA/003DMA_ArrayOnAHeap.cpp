#include<iostream>

using namespace std;

int main() {

	//allocate memory of 1D array on heap memory
	int* ptr = new int[5]{10,20,30,40,50};

	//access elements of the 1D array
	for(int i=0 ; i<5 ; i++) {
		cout << ptr[i] << " " << *(ptr+i) << endl;
	}

	//deallocate memory of 1D memory
	delete [] ptr;
	//if you write only ptr only those 4B will get released 
	//for the whole add[]

	return 0;
}