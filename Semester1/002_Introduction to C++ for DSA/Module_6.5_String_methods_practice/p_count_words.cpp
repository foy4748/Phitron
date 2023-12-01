#include<bits/stdc++.h>
using namespace std;

int main()
{
	int count = 0;
	string word;
	while(cin>>word){
		int flag = 0;
		for(char c:word){
			if(isalpha(c)){
				if(!flag){
					count++;
				}
				flag = 1;
			}else{
				flag = 0;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}

