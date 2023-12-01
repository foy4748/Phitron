#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T; cin>>T;
	for(int t=0; t<T; t++){
		string input;
		cin>>input;
		string last3(input, 3);
		int rightSum = 0;
		int leftSum  = 0;
		for(int i = 0; i<3; i++){
			rightSum += (int)last3[i] - (int)'0';
		}
		for(int i = 0; i<3; i++){
			leftSum += (int)input[i] - (int)'0';
		}
		//cout<<leftSum<<" "<<rightSum<<endl;
		(leftSum == rightSum) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	}

	return 0;
}
