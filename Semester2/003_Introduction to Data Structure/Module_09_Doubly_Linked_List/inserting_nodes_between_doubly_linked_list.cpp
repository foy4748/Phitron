#include<bits/stdc++.h>

using namespace std;

class DNode{
	public:
		int value;
		DNode * next;
		DNode * prev;
		DNode(int value){
			this->value = value;
			this->next = NULL;
			this->prev = NULL;
		}
};

void input_doubly_linked_list(DNode* & HEAD, DNode* & TAIL, int value){
	DNode * newNode = new DNode(value);
	if(HEAD == NULL){
		HEAD = newNode;
		TAIL = newNode;
		return;
	}
	TAIL->next = newNode;
	newNode->prev = TAIL;
	TAIL = newNode;
}

void print_doubly_linked_list(DNode * HEAD){
	if(HEAD == NULL){
		cout<<endl;
		return;
	}
	cout<<HEAD->value<<" ";
	print_doubly_linked_list(HEAD->next);
}

void print_reversely_doubly_linked_list(DNode * TAIL){
	if(TAIL == NULL){
		cout<<endl;
		return;
	}
	cout<<TAIL->value<<" ";
	print_reversely_doubly_linked_list(TAIL->prev);
}

void insert_between_doubly_linked_list(DNode * HEAD, int position, int value){
	DNode * newNode = new DNode(value);
	DNode * temp = HEAD;
	for(int i = 0; i<position; i++){
		temp = temp->next;
	}
	// This is important to do it first
	newNode->next = temp->next; 

	// ================================
	temp->next = newNode;
	newNode->prev = temp;

	// Very important to do 
	// for reverse traversing
	newNode->next->prev = newNode;

}

int main()
{
	// Write your code here
	DNode * HEAD = NULL;
	DNode * TAIL = NULL;

	input_doubly_linked_list(HEAD, TAIL, 5);
	input_doubly_linked_list(HEAD, TAIL, 10);
	input_doubly_linked_list(HEAD, TAIL, 15);
	input_doubly_linked_list(HEAD, TAIL, 20);

	cout<<"Printing Doubly Linked List"<<endl;
	print_doubly_linked_list(HEAD);
	//cout<<"Printing RERVERSLY Doubly Linked List"<<endl;
	//print_reversely_doubly_linked_list(TAIL);
	cout<<"Printing after adding node between"<<endl;
	insert_between_doubly_linked_list(HEAD, 1, 12);
	print_doubly_linked_list(HEAD);
	return 0;
}

