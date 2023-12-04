#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int N; cin>>N; vector<long long int> v(N), prefix_sum_v(N);
	for(long long int i = 0; i<N; i++) cin>>v[i];
	prefix_sum_v[0] = v[0];
	for(long long int i = 1; i<N; i++){
		prefix_sum_v[i] = prefix_sum_v[i-1] + v[i];
	}

	reverse(prefix_sum_v.begin(), prefix_sum_v.end());
	for(long long int i = 0; i<N; i++) cout<<prefix_sum_v[i]<<" "; cout<<endl;
	return 0;
}
