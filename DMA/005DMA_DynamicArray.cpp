#include<iostream>

using namespace std;

resize(int* A,int c) {
	cout << "resisizing from " << c*sizeof(int) << "B to " << 2*c*sizof(int) << "B" << endl; 
	//todo
	int* B = new int[2*c];
	for(int i=0 ; i<c ; i++) {
		B[i] = A[i]
	}
	delete [] A;
	return B;
}

int main() {
	int* A = new int[1];
	int c = 1;//to store the maximum capcity of dynamic elements
	int i = 0;// to store the size of the dynamic array

	int x; // to store the integer value read from the user

	while(true) {
		cout << ">>" ;
	    cin >> x;

	    if (x<0) {
	    	break;
	    }

	    if (i==c) {
	    	//you have exhausted the capacity of the dynamic array
	    	// therfore resize
	    	A = resize(A,c);
	    	c *= 2;
	    }

	    A[i] = x;
	    i++;
	} 	
	
}