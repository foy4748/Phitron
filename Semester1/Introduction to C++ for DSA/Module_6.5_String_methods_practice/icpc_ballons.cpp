#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int T; cin>>T;
	for(int t = 0; t<T; t++){
		int freq[26] = {0};
		int N; cin>>N;
		int sum = 0;
		for(int i = 0; i<N; i++){
			char c; cin>>c;
			int code = (int)c;
			int idx = code - (int)'A';
			if(!freq[idx]){
				freq[idx] = 1;
				sum+=2;
			}else{
				sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
