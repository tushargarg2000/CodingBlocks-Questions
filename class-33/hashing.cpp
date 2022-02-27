// hashing.cpp
#include <iostream>

using namespace std;

class node {
public:
	string key;
	int data;
	node* next;

	node(string k, int d) {
		key = k;
		data = d;
		next = NULL;
	}
};


class hashMap {
	node**a;
	int ts;
	int cs;

	int hash_index(string key) {
		int ans = 0;
		int mul = 1;

		for (int i = 0; i < key.size(); i++) {
			ans = ((ans % ts) + ((key[i] % ts) * mul) % ts) % ts;

			mul = (mul * 7) % ts;
		}
		return ans;
	}

	void rehashing() {
		node**olda = a;
		int oldTs = ts;
		ts *= 2;
		a = new node*[ts];

		for (int i = 0; i < ts; i++)
			a[i] = NULL;

		for (int i = 0; i < oldTs; i++) {
			node* head = olda[i];

			while (head) {
				insert(head->key, head->data);
				head = head->next;
			}
		}
		delete[] olda;

	}

public:
	hashMap(int s = 7) {
		ts = s;
		cs = 0;
		a = new node*[s];
		for (int i = 0; i < s; i++) {
			a[i] = NULL;
		}
	}

	void insert(string key, int value) {
		//1. finding a hash index
		int index = hash_index(key);

		node *n = new node(key, value);
		n->next = a[index];
		a[index] = n;
		cs++;

		double loadFactor = cs / (ts * 1.0);
		if (loadFactor >= 0.6) {
			rehashing();
		}
	}

	void print() {
		for (int i = 0; i < ts; i++) {
			node* head = a[i];

			cout << i << "--> ";
			while (head) {
				cout << "( " << head->key << ", " << head->data << ")";
				head = head->next;
			}

			cout << endl;
		}
	}

	node* search(string key) {
		int index = hash_index(key);
		node* head = a[index];

		// if(!head){

		// }
		while (head) {
			if (head->key == key) {
				return head;
			}
			head = head->next;
		}
		return NULL;
	}

	int& operator[](string key) {
		node * n = search(key);
		if (n) {
			return n->data;
		} else {
			insert(key, -1);
			node * x = search(key);
			return x->data;
		}
	}

	// delete a node HW-> do yourself!!

};

int main() {

	hashMap h;

	h.insert("Mango", 10);
	h.insert("Pineapple", 40);
	h.insert("Apple", 20);
	h.insert("Apple1", 20);
	h.insert("Apple2", 20);
	h.insert("Apple3", 20);

	h["Mango"] = 11;
	// h.insert("Mango", 11);

	h.print();


}






