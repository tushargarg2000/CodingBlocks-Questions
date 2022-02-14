// findCycle.cpp
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

void insertAtFront(node* &head, int d) {

	node *n = new node(d);

	if (head == NULL) {
		head = n;
		// tail = n;
	} else {
		n->next = head;
		head = n;
	}
}

int length(node*head) {

	int i = 0;
	while (head != NULL) {
		head = head->next;
		i++;
	}
	return i;
}
node* mid(node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}
	node* s = head, *f = head->next;

	while (f != NULL && f->next != NULL) {
		s = s->next;
		f = f->next->next;
	}
	return s;
}

void reverse(node*&head) {
	if (!head || !head->next)
		return;
	node * c = head, *p = NULL;

	while (c) {
		node* n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	head = p;
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

void createCycle(node* head) {
	// traverse till end
	// append end to head->next
	node* temp = head;
	while (head -> next != NULL) {
		head = head->next;
	}
	head->next = temp;
}

void removeCycle(node*f, node*head) {
	node* s = head;   //f==s
	// s=head, f==f
	node* p = NULL;
	while (s->next != f) {
		s = s->next;
	}
	p = s;
	s = head;

	while (s != f) {
		p = f;
		s = s->next;
		f = f->next;
	}
	p->next = NULL;
	return;
}

bool isCyclic(node* head) {
	if (head == NULL)
		return 0;
	node* fast = head, *slow = head;

	while (fast && fast->next) {
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow) {
			removeCycle(slow, head);
			return 1;
		}
	}
	return 0;
}

int main() {

	node* head = NULL;
	insertAtFront(head, 1);
	// insertAtFront(head, 2);
	// insertAtFront(head, 3);
	// insertAtFront(head, 4);
	// insertAtFront(head, 5);
	// insertAtFront(head, 6);
	// insertAtFront(head, 7);
	reverse(head);

	createCycle(head);

	if (isCyclic(head)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	cout << endl;
	print(head);
	// print(head);
}







