// bst2.cpp
#include<iostream>
#include<queue>
using namespace std;

class node {
public:
	int data;
	node*right;
	node*left;

	node(int d) {
		right = left = NULL;
		data = d;
	}
};

int height(node* root) {
	if (root == NULL) {
		return 0;
	}

	return max(height(root->left), height(root->right)) + 1;
}


node* InsertInBST(node* root, int value) {

	if (root == NULL) {
		root = new node(value);
		return root;
	}

	if (root->data < value)
		root->right = InsertInBST(root->right, value);
	else
		root->left = InsertInBST(root->left, value);

	return root;
}

bool isBalanced(node* root) {

	if (root == NULL)
		return true;


	int leftHeight = height(root->left);

	int rightHeight = height(root->right);

	if (abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right))
		return true;

	return false;
}
void levelOrderTraversal(node* root) {

	queue<node*> q;

	q.push(root);
	q.push(NULL);


	while (!q.empty()) {

		node* p = q.front();
		q.pop();

		if (p != NULL) {

			cout << p->data << " ";
			if (p->left != NULL) {
				q.push(p->left);
			}
			if (p->right != NULL)
				q.push(p->right);

		} else { // address from the queue I have got is NULL

			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}

		}
	}

}
bool isPresentInBST(node* root, int value) {

	if (root == NULL)
		return false;

	if (root->data == value)
		return true;

	else if (root->data < value)
		return isPresentInBST(root->right, value);

	else
		return isPresentInBST(root->left, value);
}
node* createBST()
{

	int noOfNodes;
	cin >> noOfNodes;

	node* root = NULL;

	for (int i = 1; i <= noOfNodes; i++) {

		int value;
		cin >> value;
		root = InsertInBST(root, value);
	}

	return root;
}

int arr[] = {1, 2, 8, 9, 10, 11, 12};
int n = 7;

node* makeTree(int s, int e) {

	if (s > e) {
		return NULL;
	}
	int mid = (s + e) / 2;
	node* root = new node(arr[mid]);
	// LST
	root->left = makeTree(s, mid - 1);

	// RST
	root->right = makeTree(mid + 1, e);
	return root;
}

class LinkedPair {
public:
	node* head;
	node* tail;
};

LinkedPair BSTToLL(node* root) {

	LinkedPair l;
	// when we are standing on NULL
	if (root == NULL) {
		l.head = l.tail = NULL;
		return l;
	}

	//when we have root only
	else if (!root->left && !root->right) {
		l.head = l.tail = root;
		return l;
	}

	// when we have left child
	else if (root->left && !root->right) {
		LinkedPair left = BSTToLL(root->left);
		left.tail->right = root;
		l.head = left.head;
		l.tail = root;
		return l;
	}
	//when we have right child only

	else if (root->right && !root->left) {
		LinkedPair right = BSTToLL(root->right);
		root->right = right.head;
		l.head = root;
		l.tail = right.tail;
		return l;
	}

	// when we have both the childs

	else {
		LinkedPair left = BSTToLL(root->left);
		LinkedPair right = BSTToLL(root->right);

		left.tail->right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
		return l;
	}

}

node* LCA(node*root, int x, int y) {
	if (root == NULL) {
		return NULL;
	}

	if (root->data == x || root->data == y)
		return root;

	node* left = LCA(root->left, x, y);
	node* right = LCA(root->right, x, y);

	if (left && right) {
		return root;
	}
	if (left) {
		return left;
	}
	return right;
}



int main() {

	node* root = makeTree(0, n - 1);
	levelOrderTraversal(root);

	// LinkedPair l = BSTToLL(root);

	// while (l.head) {
	// 	cout << l.head->data << "-->";
	// 	l.head = l.head->right;
	// }

	node* f = LCA(root, 10, 12);
	cout << f->data << endl;
}










