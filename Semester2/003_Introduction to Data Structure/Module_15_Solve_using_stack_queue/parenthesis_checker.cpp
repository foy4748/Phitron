#include<bits/stdc++.h>

using namespace std;

char parenthesisMatcher(char c){
        char result = '0';
        switch(c){
            case ']':
                result = '[';
                break;
            case '}':
                result = '{';
                break;
            case ')':
                result = '(';
                break;
            default:
                break;
        }

        return result;
    }

int main()
{
	// Write your code here
	string s; cin>>s;
	stack<char> st;
	for(char c: s){
		if(!st.empty() && st.top() == parenthesisMatcher(c)){
			if(st.empty()) return false;
			st.pop();
		}else{
			st.push(c);
		}
	}

	/*
		cout<<parenthesisMatcher(c)<<endl;
		if(!st.empty()){
			st.top();
		}
	*/
	cout<<"Remaining braces"<<endl;
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;

	return 0;
}
