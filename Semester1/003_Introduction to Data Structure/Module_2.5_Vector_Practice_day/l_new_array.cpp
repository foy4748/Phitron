#include<bits/stdc++.h>

using namespace std;

int main(){
    int N; cin>>N;
    vector<int> v1(N);
    vector<int> v2(N);
    for(int i = 0; i<N; i++){
		int x; cin>>x;
		v1[i] = x;
    }
    for(int i = 0; i<N; i++){
		int x; cin>>x;
		v2[i] = x;
    }

	for(int i = 0; i<N; i++){
		v2.push_back(v1[i]);
	}

	for(int i = 0; i<2*N; i++){
		cout<<v2[i]<<" ";
	}
	cout<<endl;
}
