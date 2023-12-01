// Thanks to this YouTube video
// https://www.youtube.com/watch?v=wAbI2Hlm01k

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int N, Q; cin>>N>>Q; 
	vector<long long int> v(N); 
	vector<long long int> cummulative_v(N);
	int flag = 1;
	for(long long int i = 0; i<N; i++) {
		cin>>v[i];
		if(flag){
			cummulative_v[i] = v[i];
			flag = 0;
		}else{
			cummulative_v[i] = cummulative_v[i-1] + v[i];
		}
	}

	for(long long int i = 0; i<Q; i++){
		long long int L,R; cin>>L>>R;
		long long int sum;
		for(long long int j = L-1; j<R; j++){
			sum = cummulative_v[R-1] - cummulative_v[L-1] + v[L-1];
		}
		cout<<sum<<endl;
	}

	/* for(int i = 0; i<N; i++) cout<<v[i]<<" "; cout<<endl; */
	/* for(int i = 0; i<N; i++) cout<<cummulative_v[i]<<" "; cout<<endl; */
	return 0;
}
//======================================= Brute Force Solution ===================================================
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N, Q; cin>>N>>Q; vector<int> v(N);
	for(int i = 0; i<N; i++) cin>>v[i];
	for(int i = 0; i<Q; i++){
		int sum = 0;
		int L,R; cin>>L>>R;
		for(int j = L-1; j<R; j++){
			sum+=v[j];
		}
		cout<<sum<<endl;
	}
	return 0;
}
*/
//===============================================================================================================
