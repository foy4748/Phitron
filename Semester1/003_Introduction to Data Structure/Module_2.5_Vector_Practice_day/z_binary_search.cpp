#include<bits/stdc++.h>
using namespace std;

bool binary_search_isFound(vector<long long int>& v,long long int target, long long int l, long long int r){

	long long int m = l + (r - l) / 2;
	if(v[m] == target){
		return true;
	}

	if(l >= r){
		return false;
	}

	if(target < v[m]){
		return binary_search_isFound(v, target, l, m-1);
	}else{
		return binary_search_isFound(v, target, m+1, r);
	}

}

int main()
{
	long long int N, Q; cin>>N>>Q; vector<long long int> v(N);
	for(long long int i = 0; i<N; i++) cin>>v[i];
	sort(v.begin(), v.end());
	for(int i = 0; i<Q; i++){
		long long int target; cin>>target;
		bool test =  binary_search_isFound(v, target, 0, v.size()-1);
		(test) ? cout<<"YES"<<endl : cout<<"NO"<<endl;

	}
	//for(long long int i = 0; i<N; i++) cout<<v[i]<<" "; cout<<endl;
	
	return 0;
}

