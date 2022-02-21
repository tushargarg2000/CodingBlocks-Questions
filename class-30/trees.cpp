// trees.cpp
#include <iostream>

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 4 13 -1 -1 -1

using namespace std;

class node {
public:
	node*right;
	int data;
	node*left;

	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};

// 2
node* CT() {

	node*root = NULL;
	int data;
	cin >> data;

	if (data == -1) {
		return root;
	}

	root = new node(data);

	// left sub TREE
	root->left = CT();
	root->right = CT();

	return root;
}

void pre(node*root) {
	if (root == NULL) {
		return;
	}

	// print
	cout << root->data << " ";
	// left
	pre(root->left);
	// right
	pre(root->right);
}
void ino(node*root) {
	if (root == NULL) {
		return;
	}


	// left
	ino(root->left);
	// print
	cout << root->data << " ";
	// right
	ino(root->right);

}

int countNode(node* root) {
	if (root == NULL)
		return 0;
	return countNode(root->left) + countNode(root->right) + 1;
}

void post(node*root) {
	if (root == NULL) {
		return;
	}
	// left
	post(root->left);

	// right
	post(root->right);
	// print
	cout << root->data << " ";
}

int height(node* root) {
	if (root == NULL) {
		return 0;
	}

	return max(height(root->left), height(root->right)) + 1;
}

int dia(node* root) {
	if (root == NULL)
		return 0;

	int op1 = height(root->left) + height(root->right);
	int op2 = dia(root->left);
	int op3 = dia(root->right);

	return max(op1, max(op2, op3));
}

class Pair {
public:
	int height;
	int dia;
};

Pair fastDia(node* root) {
	if (root == NULL) {
		Pair p;
		p.height = 0;
		p.dia = 0;
		return p;
	}

	Pair left = fastDia(root->left);
	Pair right = fastDia(root->right);

	Pair p;
	p.height = max(left.height, right.height) + 1;
	p.dia = max(left.height + right.height , max(left.dia, right.dia));
	return p;
}

node* find(node*root, int key) {
	if (root == NULL) {
		return NULL;
	}

	if (root->data == key)
		return root;

	node* left = find(root->left, key);
	if (left)
		return left;
	else {
		node* right = find(root->right, key);
		return right;
	}
}

void mirrorTree(node* root) {
	if (root == NULL)
		return;
	swap(root->right, root->left);
	mirrorTree(root->left);
	mirrorTree(root->right);
}

int main() {

	node* root = CT();
	mirrorTree(root);
	pre(root);
	cout << endl;
	// post(root);
	cout << endl;
	ino(root);
	cout << endl;
	cout << "Count of nodes: " << countNode(root) << endl;
	cout << "Height of the tree: " << height(root) << endl;
	cout << "Diameter of tree: " << dia(root) << endl;
	cout << "Fast Dia: " << fastDia(root).dia << "height: " << fastDia(root).height << endl;
	if (find(root, 100))
		cout << "found the key: " << find(root, 100)->data << endl;
	else
		cout << "nahi mila" << endl;

}









