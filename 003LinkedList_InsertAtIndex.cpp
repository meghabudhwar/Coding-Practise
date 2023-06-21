#include <iostream>

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

node* getNode(node* head , int j){

	int k=0;
	node* temp = head;

	while(temp && k < j ){

		temp = temp -> next;
		k++;
	}

	return temp;
}

void insertAtIndex(node*& head , int data , int i){

	if (i==0) {
		insertAtHead(head , data);
		return;
	}

	//1. create a new node with the given data on the heap
	node* n = new node(data);

	//2. get hold of the pointer to the node at the node (i-1)th index 
	node* prev = getNode(head , i-1);

	if(!prev) { //prev == NULL
		// i exceeds the length of the Linkedlist
		return;

	} 

	//3. update the next pointer of the newly created node such that
	// it points the node which comes after the prev node
	n -> next = prev -> next;

	//4. update the newly pointed pointer of the prev node such that it points to the newly created node.
	prev -> next = n;


}

int main() {

	node* head = NULL;

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	insertAtIndex(head, 25, 2);

	printLinkedList(head);

	return 0;
}