#include<bits/stdc++.h>

using namespace std;

int main()
{
	int idx=0;
	string s;
	cin>>s;
	while(true){
		idx = s.find("EGYPT",idx);
		if(idx < 0) break;
		s.replace(idx, 5, " ");
	}
	cout<<s;
	return 0;
}

