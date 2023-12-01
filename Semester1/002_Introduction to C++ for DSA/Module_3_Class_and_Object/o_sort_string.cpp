#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N; cin>>N;
	int freq[26] = {0};
	int start_char = 'a';
	for(int i = 0; i<N; i++){
		char currentChar;
		cin>>currentChar;
		int code = currentChar;
		freq[code-start_char]++;
	}

	//for(int i = 0; i<26; i++) cout<<freq[i]<<endl;

	for(int i = 0; i<26; i++){
		if(freq[i]){
			for(int j = 0; j<freq[i]; j++){
				char t = i+start_char;
				cout<<t;
			}
		}
	}
	return 0;
}
