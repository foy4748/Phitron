#include<bits/stdc++.h>

using namespace std;

class TNode{
	public:
		int value;
		TNode * left;
		TNode * right;
		TNode(int value){
			this->value = value;
			this->left = NULL;
			this->right = NULL;
		}
};

void preorderTraverse(TNode * root){
	TNode * temp = root;

	if(!temp) {
		return;
	}

	cout<<temp->value<<" ";
	preorderTraverse(temp->left);
	preorderTraverse(temp->right);
}

void postorderTraverse(TNode * root){
	TNode * temp = root;

	if(!temp) {
		return;
	}

	postorderTraverse(temp->left);
	postorderTraverse(temp->right);
	cout<<temp->value<<" ";
}

void inorderTraverse(TNode * root){
	TNode * temp = root;

	if(!temp) {
		return;
	}

	inorderTraverse(temp->left);
	cout<<temp->value<<" ";
	inorderTraverse(temp->right);

}

int main()
{
	// Write your code here
	TNode * root = new TNode(5);

	TNode * a = new TNode(10);
	TNode * b = new TNode(15);

	TNode * c = new TNode(20);
	TNode * d = new TNode(25);
	TNode * e = new TNode(30);

	TNode * f = new TNode(100);
	TNode * g = new TNode(150);
	TNode * h = new TNode(200);
	TNode * i = new TNode(250);

	root->left = a; root->right = b;

	a->right = c; b->left = d; b->right = e;

	c->left = f; c->right = g; e->left = h; e->right = i;

	// Printing PreOrder Travers
	preorderTraverse(root); cout<<endl;
	postorderTraverse(root); cout<<endl;


	return 0;
}
