#include<iostream>

using namespace std;

int  main() {

	int *ptr = new int;
	*ptr = 50;

	cout << *ptr <<endl;

	delete ptr;

	//int *ptr = new int;

	//*ptr = 500;

	//cout << *ptr <<endl;

	//delete ptr;

	return 0;

}
