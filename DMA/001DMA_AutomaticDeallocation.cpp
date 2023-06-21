#include<iostream>

using namespace std;

int* f() {
	// these are on the stack memory they get erased as soon as the function gets finished.
	//int x = 10;
	//return &x;

	//these are in the heap memory these donot get erased as the deallocation depends on the programmer.
	int *ptr= new int;
	return ptr;
}


int main() {

	int *xptr = f();
	return 0;
}