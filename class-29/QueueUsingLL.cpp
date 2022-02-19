// QueueUsingLL.cpp
#include <iostream>

using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		next = NULL;
		data = d;
	}
};

class Queue {
	node*head;
	node* tail;

public:

	void push(int d) {
		node*n = new node(d);

		if (head == NULL) {
			head = tail = n;
		} else {
			tail->next = n;
			tail = n; //tail=tail->next
		}
		return;
	}

	void pop() {
		if (head == NULL) {
			cout << "UNDERFLOW" << endl;
			return;
		}

		if (head->next == NULL) {
			delete head;
			head = NULL;
			return;
		}

		node* temp = head;
		head = head->next;
		delete temp;
		return;
	}

	bool empty() {
		return head == NULL;
	}

	int front() {
		return head->data;
	}

};

int main() {
	Queue q;
	q.push(1);
	q.push(1);
	// q.push(2);
	q.push(3);
	q.pop();

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

}





