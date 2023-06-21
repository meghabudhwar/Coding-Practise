#include<iostream>

using namespace std;

class node{

	public :

			int data;
			node* next;

			node(int data) {
				this -> data = data;
				this -> next = NULL;
			}
};


void insertAtHead(node*& head , int data) {

	//1. create a new node with the given data on the heap
	node* n = new node(data);

	//2.assign the next field of  the newly created node
	//address of the head node;
	n -> next = head;

	//3.Make the newly created node the head of the linked list
	head = n;

}

//node* insertatHEad(node* head , int data) {
	
	//1. Create a new node with the given data on the heap
//  node* n = new node(data);

	//2. assign the next field of the newly created node
	// address of the head node
//  n ->next = head;

	//3. make the newly created node as the head of the linked list
//	head = n;

// 	return head;


//}

void printLinkedList(node* head) {

	while(head) {
		cout << head->data << " ";
		head = head ->next;
	}

	cout << endl;

}

int main() {

	node * head = NULL;

	insertAtHead(head , 50);
	insertAtHead(head , 40);
	insertAtHead(head , 30);
	insertAtHead(head , 20);
	insertAtHead(head , 10);

	printLinkedList(head);

}