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

void insert_to_tail(Node* & head, int value){
	Node * newNode = new Node(value);
	if(head == NULL){
		head = newNode;
		return;
	}

	Node * temp = head;
	while(temp->next){
		temp = temp->next;
	}
	temp->next = newNode;

}

int main()
{
	// Write your code here

	Node * h1 = NULL;
	insert_to_tail(h1, 100);
	insert_to_tail(h1, 500);
	insert_to_tail(h1, 600);

	Node * temp = h1;
	while(temp){
		cout<<temp->value<<endl;
		temp = temp->next;
	}
	
	return 0;
}
