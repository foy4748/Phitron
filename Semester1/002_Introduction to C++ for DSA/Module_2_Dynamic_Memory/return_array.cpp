#include<bits/stdc++.h>

int * get_array(int N)
{
	int * arr = new	int[N];
	for(int i = 0; i<N; i++) std::cin>>*(arr+i);
	return arr;
}

int main()
{
	int n; std::cin>>n;
	int * arr = get_array(n);
	for(int i = 0; i<n; i++) std::cout<<*(arr+i)<<" "; std::cout<<std::endl;
	delete[] arr;
	return 0;
}
