#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N; cin>>N; vector<int> v(N);
	//vector<int> freq(10,0);
	int count = 0;
	for(int i=0; i<N; i++) cin>>v[i];

	for (int i = 0; i < N; i++) {
		bool isFound = find(v.begin(), v.end(), v[i]+1) != v.end();
		if(isFound) count++;

	}
	cout<<count<<endl;
	return 0;
}
