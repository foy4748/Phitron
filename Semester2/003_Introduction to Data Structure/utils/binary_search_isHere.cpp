#include<bits/stdc++.h>
using namespace std;

bool binary_search_isHere(vector<int> & v, int target, int l, int r){
    int m = r - (r - l)/2;
    if(v[m] == target){
        return true;
    }
    if(l>r){
        return false;
    }
    if(target < v[m]){
        return binary_search_isHere(v, target, l , m-1);
    }else{
        return binary_search_isHere(v, target, m+1 , r);
    }
}


int main()
{
	
	// Driver Code
	int N; cin>>N; vector<int> v(N);
	for(int i = 0; i < N; i++) cin>>v[i];
	bool isFound = binary_search_isHere(v, v.back(), 0, v.size()-1);
	(isFound) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	return 0;
}
