#include <bits/stdc++.h> 
queue<int> reverseQueue(queue<int> q)
	// CodeNinja
	// https://www.codingninjas.com/studio/problems/reversing-a-queue_982934
{
    // Write your code here.
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    return q;
}

