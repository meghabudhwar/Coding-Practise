#include<iostream>


using namespace std;

class creditcard {

	public :

			string bankname;
			string cardnumber;

			creditcard() {
				cout << "Iam inside the default Constructor of credit card" << endl;
			}

			creditcard(string bn , string cn) {
				cout << "I am insidethe parameterised constructor of creditcard." << endl;
				bankname = bn;
				cardnumber = cn;
			}
};

class customer {

	public :

		string name; //member object
		int age;
		char gender;
		double credits;
		creditcard card; // member object

		customer(string n, int a, char g, double c , string bn , string cn )  : card(bn,cn) {
			cout << "I am inside the parameterised constructor of the customer class" << endl;
			name = n;
			age = a;
			gender = g;
			credits = c;
		}


		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
			cout << "BankName : " << card.bankname << endl;
			cout << "CardName : " << card.cardname << endl;

		}

		

};

int main() {

	customer c("Megha", 18, 'F', 100 , 'SBI' , "1234"); // object declaration -> parameterised constructor is invoked 
	// c3("Lakshya", 16, 'M', 0); // object declaration -> parameterised constructor is invoked 

	c.printCustomerInfo();



	return 0;
}