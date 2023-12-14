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

void linked_list_input(Node* & HEAD, Node* & TAIL, int val){
	Node * newNode = new Node(val);
	if(HEAD==NULL){
		HEAD = newNode;
		TAIL = newNode;
		return;
	}
	TAIL->next = newNode;
	TAIL = newNode;
}

Node * reverse_singly_linked_list(Node*  HEAD){
	if(HEAD->next == NULL){
		return HEAD;
	}
	Node * newHead = reverse_singly_linked_list(HEAD->next);
	HEAD->next->next = HEAD;
	HEAD->next = NULL;
	return newHead;
}

void print_linked_list(Node * HEAD){
	if(HEAD == NULL) {
		cout<<endl;
		return;
	};
	cout<<HEAD->value<<" ";
	print_linked_list(HEAD->next);
}

int main()
{
	// Write your code here
	Node * HEAD = NULL;
	Node * TAIL = NULL;
	linked_list_input(HEAD, TAIL,5);
	linked_list_input(HEAD, TAIL,10);
	linked_list_input(HEAD, TAIL,15);
	linked_list_input(HEAD, TAIL,20);
	
	Node * temp = HEAD;
	while(temp){
		cout<<temp->value<<" ";
		temp = temp->next;
	}
	cout<<endl;
	temp = HEAD;
	Node * newHead = reverse_singly_linked_list(temp);
	//reverse_singly_linked_list(temp);
	print_linked_list(newHead);

	return 0;
}
