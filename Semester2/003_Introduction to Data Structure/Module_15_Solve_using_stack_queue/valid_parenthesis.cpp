class Solution {
	// LeetCode
	// https://leetcode.com/problems/valid-parentheses
public:

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

    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(!st.empty() && st.top() == this->parenthesisMatcher(c)){
                if(st.empty()) return false;
                st.pop();
            }else{
                st.push(c);
            }

        }

        return st.empty();
    }
};
