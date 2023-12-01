#include<bits/stdc++.h>
using namespace std;

// Used Referencing
void reverse_word(string & word, int size){
	int leftPtr = 0;
	int rightPtr = size-1;

	while(leftPtr<rightPtr){
		swap(word[leftPtr],word[rightPtr]);
		leftPtr++; rightPtr--;
	}
}


int main()
{
	string word;
	// Used the flag technique
	// if flag is truthy, don't print the
	// preceding space but switch the flag
	// then print the rest of the word with a space in front of them
	// You don't know when the last word will appear
	// But you know the first, right?
	int flag = 1;
	while(cin>>word){
		reverse_word(word, word.size());
		if(flag){
			cout<<word;
			flag = 0;
		}else{
			cout<<" "<<word;
		}
	}
	return 0;
}



