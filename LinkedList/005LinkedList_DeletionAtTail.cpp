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

		node* n = new node(data);
		n -> next = head;
		head = n;
};

void printLinkedList(node* head) {

	while(head) {
		cout << head -> data << " ";
		head = head -> next; 
	}
};

void deleteAtHead(node*& head){

	if(!head) { // head == NULL
		// linkedList is empty
		return;
	}

	node* temp = head;
	head = head->next;
	delete temp;

};


void deleteAtTail(node*& head){

	if(!head) { // head == NULL
		// linkedList is empty
		return;
	}

	if(!head->next) {
		deleteAtHead(head);
	}

	node* prev = NULL;
	node* tail = head;

	while(tail->next != NULL) {
		//tail -> next != NULL
		prev = tail;
		tail = tail->next;
	}

	prev -> next = NULL;
	delete tail;

};

int main() {

	node* head = NULL; // linked list is initially empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	cout << endl;

	deleteAtHead(head);

	deleteAtTail(head);

	printLinkedList(head);


	return 0;
};
