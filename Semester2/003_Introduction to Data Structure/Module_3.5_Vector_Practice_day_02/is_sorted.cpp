#include<bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
	int T; cin>>T;
	for(int t = 0; t<T; t++){

		int N; cin>>N; vector<int> v(N);
		for(int i = 0; i<N; i++) cin>>v[i];

		int flag = 1;
		for(int i = 1; i<N; i++){
			if(v[i-1] > v[i]){
				flag = 0;
			}
		}
		flag ? cout<<"YES"<<endl : cout<<"NO"<<endl; 
	}
	return 0;
}
