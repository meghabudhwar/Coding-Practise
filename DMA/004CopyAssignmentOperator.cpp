#include<iostream>
#include<cstring>


using namespace std;

class customer {
	public :
		char name[100];
		int age;
		char gender;
		double credits;

		customer() {
			cout << "I am inside the default constructor of the customer class" << endl;
		}

		customer(char* n, int a, char g, double c) {
			cout << "I am inside the parameterised constructor of the customer class" << endl;
			strcpy(name, n);
			age = a;
			gender = g;
			credits = c;
		}

		/*void operator=(customer c){
			strcpy(name , c.name);
			age = c.age;
			gender = c.gender;
			credits = c.credits;
		}*/


		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

};

int main() {

	customer c2("Megha", 18, 'F', 100); // object declaration -> parameterised constructor is invoked 

	customer c3;//default copy constructor is invoked

	c3 = c2;// copy assignment is used to make c3 as a copy of c2

	c3.printCustomerInfo();

	return 0;
}