#include <bits/stdc++.h> 

void cumulative_stack(stack<int>& st){
	// CodeNinja
	// https://www.codingninjas.com/studio/problems/maximum-equal-stack-sum_1062571
	stack<int> t;
	while(!st.empty()){
		t.push(st.top());
		st.pop();
	}

	while(!t.empty()){
		if(st.empty()){
			st.push(t.top());
		}else{
			st.push(t.top()+st.top());
		}
		t.pop();
	}

}

int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3) {
    // Write your code here
    cumulative_stack(stk1);
    cumulative_stack(stk2);
    cumulative_stack(stk3);

	// Logics

	//cout<<"stk1.top()"<<"\t"<<"stk2.top()"<<"\t"<<"stk3.top()"<<endl;
	while(true){
	//cout<<stk1.top()<<"\t"<<stk2.top()<<"\t"<<stk3.top()<<endl;
		if(stk1.top() >= stk2.top() && stk1.top() >= stk3.top()){
			if(stk1.empty()) return 0;
			stk1.pop();
		}else if(stk2.top() >= stk1.top() && stk2.top() >= stk3.top()){
			if(stk2.empty()) return 0;
			stk2.pop();
		}else{
			if(stk3.empty()) return 0;
			stk3.pop();
		}

		if(stk1.empty() || stk2.empty() || stk3.empty()) return 0;

		if(stk1.top() == stk2.top() && stk1.top() == stk3.top() && stk2.top() == stk3.top()){
			return stk2.top();
		}
	}

	return 0;
}

int main(){
	stack<int> s1;
	stack<int> s2;
	stack<int> s3;

	//Problem Set 1
	 /* s1.push(3); s1.push(5); s1.push(8); */ 
	 /* s2.push(2); s2.push(2); s2.push(4); s2.push(9); s2.push(6); */ 
	 /* s3.push(2); s3.push(1); s3.push(2); s3.push(3); */ 

	//Problem Set 2
	 /* s1.push(3); s1.push(6); */
	 /* s2.push(1); s2.push(1); s2.push(1); */
	 /* s3.push(8); s3.push(2); s3.push(1); */ 

	//Problem Set 3
	 s1.push(2); s1.push(4); s1.push(1);  s1.push(9);
	 s2.push(1); s2.push(6); s2.push(3);
	 s3.push(5); s3.push(2); s3.push(1);
	int max_val = maxSum(s1,s2,s3);
	cout<<max_val<<endl;
}
