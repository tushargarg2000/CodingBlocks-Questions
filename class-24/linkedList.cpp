// linkedList.cpp
#include <iostream>

using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};

int length(node*head) {

	int i = 0;
	while (head != NULL) {
		head = head->next;
		i++;
	}
	return i;
}


void insertAtFront(node* &head, node* &tail, int d) {

	node *n = new node(d);

	if (head == NULL) {
		head = n;
		tail = n;
	} else {
		n->next = head;
		head = n;
	}
}

void insertAtEnd(node* &head, node* &tail, int d) {
	node*n = new node(d);
	if (head == NULL) {
		head = n;
		tail = n;
	} else {
		tail->next = n;
		tail = n;
	}
}

void insertInMiddle(node* &head, node* &tail, int d, int pos) {
	if (pos <= 0) {
		insertAtFront(head, tail, d);
	} else if (pos >= length(head)) {
		insertAtEnd(head, tail, d);
	} else {

		node *n = new node(d);

		node*temp = head;
		int i = 0;
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}
		n->next = temp->next;
		temp->next = n;
	}
}

void print(node*&head) {
	if (head == NULL)
		return;

	node*temp = head;

	while (temp != NULL) {
		cout << temp->data << "-->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

int main() {
	node*head = NULL;
	node*tail = NULL;

	// insertAtFront(head, tail, 1);
	// insertAtFront(head, tail, 2);
	// insertAtFront(head, tail, 3);
	// insertAtFront(head, tail, 4);

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);

	insertInMiddle(head, tail, 6, 2);


	print(head);

	// print(head);

}