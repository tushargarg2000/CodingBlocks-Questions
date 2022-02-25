// trees.cpp
#include <iostream>
#include<bits/stdc++.h>
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


void levelOrderTraversal(node* root){
    
    queue<node*> q;
    
    q.push(root);
    q.push(NULL);
    
    
    while(!q.empty()){
    
        auto p = q.front();
        q.pop();
        
        if(p!=NULL){
            
            cout<<p->data<<" ";
            if(p->left!=NULL){
                q.push(p->left);
            }
            if(p->right!=NULL)
                q.push(p->right);
            
        }else{ // address from the queue I have got is NULL
            
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
            
        }
    }
    
}
int inOrderArray[] = {4, 13, 3, 8, 7, 6, 4, 10, 1}; 
int preOrderArray[] = {8, 3, 4, 13, 10, 6, 7, 4, 1};

int i=0;


node* createTree(int s,int e){
    
    if(s>e)
        return NULL;
        
    node* root = new node(preOrderArray[i]);
    i++;
    
    int index = -1; //Finding the current root in this range [s,e]...
    
    
    for(int j=s;j<=e;j++){
        
        if(root->data==inOrderArray[j]){
            index = j;
            break;
        }
    }
    //I have got the index from the inorder Traversal.....
    
    root->left = createTree(s,index-1);
    root->right = createTree(index+1,e);
    
    return root;
    
}

node* InsertInBST(node* root,int value){
    
    if(root==NULL){
        root = new node(value);
        return root;
    }
    
    if(root->data<value)
        root->right = InsertInBST(root->right,value);
    else
        root->left = InsertInBST(root->left,value);
    
    return root;
}

bool isBalanced(node* root){
    
    if(root==NULL)
        return true;
    
    
    int leftHeight = height(root->left);
    
    int rightHeight = height(root->right);
    
    if(abs(leftHeight-rightHeight)<=1&&isBalanced(root->left)&&isBalanced(root->right))
        return true;
        
    return false;
}
bool isPresentInBST(node* root,int value){
    
    if(root==null)
        return false;
    
    if(root->data==value)
        return true;
    
    else if(root->data < value)
        return isPresentInBST(root->right,value);
    
    else
        return isPresentInBST(root->left,value);
}
node* createBST()
{
    
    int noOfNodes;
    cin>>noOfNodes;
    
    node* root = NULL;
    
    for(int i=1;i<=noOfNodes;i++){
        
        int value;
        cin>>value;
        root = InsertInBST(root,value);
    }
    
    return root;
}
int main() {

	node* root = NULL;
	//mirrorTree(root);
	//pre(root);
	//cout << endl;
	// post(root);
	//cout << endl;
	//ino(root);
	//cout << endl;
	
// 	root = createTree(0,8);
// 	cout<<"Level Order traversal"<<endl;
	
// 	pre(root);
	
// 	cout<<endl;
	
// 	ino(root);
	
	//cout<<endl;
	
	root = createBST();
	levelOrderTraversal(root);

}


