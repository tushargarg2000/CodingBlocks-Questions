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

void deleteAtFront(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	} else if (head == tail) {
		delete head;
		head = tail = NULL;
		return;
	} else {
		node* temp = head;
		head = head->next;
		delete temp;
		return;
	}
}

void deleteAtEnd(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	} else if (head == tail) {
		delete head;
		head = tail = NULL;
		return;
	} else {
		node *n = head;
		while (n->next != tail) {
			n = n->next;
		}
		delete tail;
		n->next = NULL;
		tail = n;
	}
}

void deleteInMid(node* &head, node* &tail, int pos) {

	if (pos == 0) {
		deleteAtFront(head, tail);
	} else if (pos < length(head)) {
		node* temp = head;

		for (int i = 0; i < pos - 1; i++) {
			temp = temp->next;
		}
		node* t = temp->next;
		temp->next = t->next;
		t->next = NULL;
		delete t;
	}

}

bool isPresent(node* head, int key) {
	if (!head)
		return 0;
	// node* temp = head;
	while (head) {
		if (head->data == key)
			return 1;
		head = head->next;
	}
	return 0;
}

bool isPresentRec(node* head, int key) {
	// base
	if (!head)return 0;

	if (head->data == key)
		return 1;
	return isPresentRec(head->next, key);
	//
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

void bubbleSort(node*&head) {
	if (head == NULL || head->next == NULL)
		return;

	for (int i = 0; i < length(head) - 1; i++) {
		node*p = NULL, *c = head;
		while (c && c->next) {
			node*n = c->next;

			if (c->data > n->data) {
				if (p == NULL) {
					// I'm on head
					c->next = n->next;
					n->next = c;
					p = head = n;
				} else {
					// not in head
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}
			} else {
				p = c;
				c = n;
			}

		}
	}
}
// 1->2->3->NULL
// 1->2->3->NULL
node* merge(node* h1, node*h2) {
	if (!h1)
		return h2;
	if (!h2)
		return h1;

	node *NH = NULL;
	if (h1->data < h2->data) {
		NH = h1;
		NH->next = merge(h1->next, h2);
	} else {
		NH = h2;
		NH->next = merge(h1, h2->next);
	}
	return NH;
}

node* mergeSort(node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}

	node*m = mid(head);
	node*a = head;
	node*b = m->next;
	m->next = NULL;

	a = mergeSort(head);
	b = mergeSort(b);

	node*c = merge(a, b);
	return c;
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
	node*head1 = NULL, *head2 = NULL;
	node*tail = NULL;

	// insertAtFront(head, tail, 1);
	// insertAtFront(head, tail, 2);
	// insertAtFront(head, tail, 3);
	// insertAtFront(head, tail, 4);

	insertAtEnd(head1, tail, 3);
	insertAtEnd(head1, tail, 1);
	insertAtEnd(head1, tail, 2);
	insertAtEnd(head1, tail, 1);
	insertAtEnd(head1, tail, 0);


	// insertAtEnd(head2, tail, 1);
	// insertAtEnd(head2, tail, 2);

	// node*m = mid(head);
	// cout << m->data << " ";

	// deleteAtFront(head, tail);
	// deleteAtEnd(head, tail);
	// deleteInMid(head, tail, 3);
	// cout << isPresentRec(head, 3);
	// insertInMiddle(head, tail, 6, 2);
	node *n = mergeSort(head1);
	print(n);
	// bubbleSort(head);
	// print(head);
	// reverse(head);
	// print(head);

}