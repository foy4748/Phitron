#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> freq(26,0);
	char c;
	while(cin>>c){
		int idx = (int)c - (int)'a';
		freq[idx]++;
	}
	for(int i = 0; i<26; i++){
		if(freq[i]){
			cout<<(char)(i+(int)'a')<<" : "<<freq[i]<<endl;
		}
	}

	return 0;
}
