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

TNode * input_tree(){
	int root_val; cin>>root_val;

	TNode * root = NULL;
	if(root_val != -1){
		root = new  TNode(root_val);
	}

	if(!root) return root;

	queue<TNode*> q;
	q.push(root);

	while(!q.empty()){
		TNode * f = q.front();
		q.pop();

		TNode * leftNode = NULL;
		TNode * rightNode = NULL;

		int l,r; cin>>l>>r;

		if(l != -1) leftNode = new TNode(l);
		if(r != -1) rightNode = new TNode(r);

		f->left = leftNode;
		f->right = rightNode;

		if(leftNode) q.push(leftNode);
		if(rightNode) q.push(rightNode);

	}

	return root;
}

void print_level_order(TNode * root){
	if(!root) return;

	queue<TNode *> q;
	q.push(root);

	while(!q.empty()){
		TNode * f = q.front();
		q.pop();

		cout<<f->value<<" ";

		if(f->left) q.push(f->left);
		if(f->right) q.push(f->right);
	}
	cout<<endl;
}

bool isExistsInBST(TNode * root, int target){

	if(!root) return false;
	cout<<root->value<<" ";

	if(root->value == target) return true;

	if(target < root->value){
		isExistsInBST(root->left, target);
	}else{
		isExistsInBST(root->right, target);
	}
}

void insert_in_bst(TNode * root, int newNode){
	if(!root) return;

	if(newNode < root->value){

		if(!root->left){
			root->left = new TNode(newNode);
			return;
		}else{
			insert_in_bst(root->left, newNode);
		}

	}else{
		if(!root->right){
			root->right = new TNode(newNode);
			return;
		}else{
			insert_in_bst(root->right, newNode);
		}

	}
}

int main()
{
	// Write your code here
	TNode * root = input_tree();
	int T; cin>>T;
	while(T--){
	int target;cin>>target;
	insert_in_bst(root, target);
	print_level_order(root);
	bool test = isExistsInBST(root, target);
	cout<<endl;
	test ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	}
	return 0;
}

