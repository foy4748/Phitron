#include <bits/stdc++.h>

using namespace std;


int main()
{
    // Write your code here
    int N; cin>>N; vector<int> v(N);
	for(int i = 0; i<N; i++) cin>>v[i];
    sort(v.begin(), v.end());
    int flag = 0;
    for(int i = 0; i<N-1; i++){
       if(v[i] == v[i+1]){
           flag = 1;
           break;
       } 
    }
    (flag) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    return 0;
}

