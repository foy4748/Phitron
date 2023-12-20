#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& st, int x) 
	// CodeNinja
	// https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166
{
    // Write your code here.
    stack<int> st2;

	while(!st.empty()){
		st2.push(st.top());
		st.pop();
	}

	st.push(x);
	
	while(!st2.empty()){
		st.push(st2.top());
		st2.pop();
	}

    return st;
}

