#include<iostream>
#include<cstring>


using namespace std;

class customer {
	public :
		char* name;
		int age;
		char gender;
		double credits;

		customer() {
			cout << "I am inside the default constructor of the customer class" << endl;
			name = new char[100];
		}

		customer(char* n, int a, char g, double c) {
			cout << "I am inside the parameterised constructor of the customer class" << endl;
			name = new char[100];
			strcpy(name, n);
			age = a;
			gender = g;
			credits = c;
		}

		customer(customer& c) {
			cout << "I am inside the copy constructor of the customer class." <<endl;
			name = new char[100];
			strcpy(name , c.name);
			age = c.age;
			gender = c.gender;
			credits = c.credits;
		}


		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

		~customer() {
			cout << "I am inside " << name << "'s destructor." << endl;
			delete [] name;
		}

};

int main() {

	customer c2("Megha", 18, 'F', 100); // object declaration -> parameterised constructor is invoked 
	customer c3("Lakshya", 16, 'M', 0); // object declaration -> parameterised constructor is invoked 


	return 0;
}