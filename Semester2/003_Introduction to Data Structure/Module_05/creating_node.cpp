#include<bits/stdc++.h>

using namespace std;


class Node{
	public:
		int value;
		Node * next;
		
		Node(int value){
			this->value = value;
			this->next = NULL;
		}
};

int main()
{
	// Write your code here
	// Static Nodes
	/*
	Node a(10);
	Node b(5);

	a.next = &b;

	cout<<a.value<<" "<<a.next->value<<endl;
	*/
	
	// Dynamic Nodes
	Node * A = new Node(5);
	Node * B = new Node(10);
	Node * C = new Node(15);
	Node * D = new Node(20);
	Node * E = new Node(25);
	
	A->next = B;
	B->next = C;
	C->next = D;
	D->next = E;

	Node * temp = A;

	// Printing Linked List
	cout<<"Printing Linked List"<<endl;
	while(temp){
		cout<<temp->value<<endl;
		temp = temp->next;
	}

	cout<<"Printing The Head"<<endl;
	cout<<"Head : "<<A->value<<endl;

	// Delete Zone
	delete A; delete B;
	delete C; delete D;
	delete E; delete temp;

	return 0;
}
