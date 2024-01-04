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

TNode* input_tree(){

	int root_val; cin>>root_val;
	TNode * root;
	if(root_val == -1) root = NULL;
	else root = new TNode(root_val);

	queue<TNode*> q;
	if(root) q.push(root);
	else return root;

	while(!q.empty()){
		TNode * f = q.front();
		q.pop();

		int l,r; cin>>l>>r;
		TNode * left = NULL;
		TNode * right = NULL;
		if(l != -1) {
			left = new TNode(l);
		}
		if(r != -1){
			right = new TNode(r);
		}
		if(left){
			f->left = left;
			q.push(left);
		}
		if(right){
			f->right = right;
			q.push(right);
		}
	}

	return root;

}

void levelorderTraverse(TNode * root){
	queue<TNode*> q;

	if(!root) return;

	q.push(root);

	while(!q.empty()){
		TNode * f = q.front();
		q.pop();
		cout<<f->value<<" ";
		if(f->left){
			q.push(f->left);
		}
		if(f->right){
			q.push(f->right);
		}
	}
	cout<<endl;
}

int main()
{
	// Write your code here
	TNode * root = input_tree();
	levelorderTraverse(root);

	return 0;
}
