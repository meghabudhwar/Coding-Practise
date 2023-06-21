#include<iostream>

using namespace std;

class node {

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


void printLinkedList(node* head) {

	while(head) {
		cout << head->data << " ";
		head = head ->next;
	}

	cout << endl;

}


node * getTail(node* head) {

	node* tail = head;
	while (tail -> next != NULL) {
		tail = tail->next;
	}
	return tail;
}



void insertAtTail(node *& head , int data) {

	if(!head) { // head == NULL
			//linked list is empty
			insertAtHead(head , data);
			return;
	}

	//1. create a new node with the given data on the heap
	node* n = new node(data);

	//2. get hold of tail node
	node *tail = getTail(head);

	//3. update the next pointer of the tail node such that
	//it points to the newly created node
	tail -> next = n;

}

int main() {

	node* head = NULL; // initially, linkedlist is empty

	insertAtTail(head , 60);

	printLinkedList(head);

	return 0;
}