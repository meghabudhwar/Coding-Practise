#include<iostream>

using namespace std;

int main() 
{
	int m;
	cout << "Enter the no. of rows : ";
	cin >> m;

	int n;
	cout << "Enter the no. of coloumns : ";
	cin >> n;

	//create a 2D array of dimension mXn on the heap memory
	int **ptr = new int*[m];
	for(int i=0 ; i<m ; i++ ) {
		ptr[i] = new int[n];
	}

	//read values into the 2D array
	for(int i =0 ; i<m ; i++) {
		for(int j =0 ; j<n ; j++) {
			cin >> ptr[i][j];
		}
	}

	//print values of the 2D array
	for(int i =0 ; i<m ; i++) {
		for(int j =0 ; j<n ; j++) {
			cout << ptr[i][j] << " ";
		}
		cout << endl;
	}

	//Delete the 2D array
	for(int i = 0; i<m ; i++) {
		delete [] ptr[i];
	}
	delete [] ptr;
}