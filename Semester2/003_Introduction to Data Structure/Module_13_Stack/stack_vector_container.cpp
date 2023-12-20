#include<bits/stdc++.h>

using namespace std;

class Stack{
	public:
		vector<int> v;
		int stackSize = 0;

		void push(int val){
			this->stackSize = stackSize + 1;
			this->v.push_back(val);
		}

		int top(){
			return this->v.back();
		}

		void pop(){
			if(this->v.empty()) return;
			this->stackSize = stackSize - 1;
			this->v.pop_back();
		}

		int currentSize(){
			return this->stackSize;
		}

};

int main()
{
	// Write your code here
	Stack STACK;
	STACK.push(5);
	STACK.push(10);
	STACK.push(15);
	STACK.push(20);

	while(STACK.currentSize()){
		cout<<STACK.top()<<" ";
		STACK.pop();
	}
	cout<<endl;
	return 0;
}
