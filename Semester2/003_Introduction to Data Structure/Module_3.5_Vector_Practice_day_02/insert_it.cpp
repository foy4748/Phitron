#include<bits/stdc++.h>

using namespace std;



int main()
{
	// Write your code here
	int N; cin>>N; vector<int> v1(N);
	for(int i = 0; i<N; i++) cin>>v1[i];

	int M; cin>>M; vector<int> v2(M);
	for(int i = 0; i<M; i++) cin>>v2[i];

	int position; cin>>position;

	v1.insert(v1.begin()+position, v2.begin(), v2.end());

	for(int i = 0; i<N+M; i++) cout<<v1[i]<<" "; cout<<endl;
	return 0;
}
