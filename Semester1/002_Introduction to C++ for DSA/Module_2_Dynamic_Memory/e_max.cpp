#include<bits/stdc++.h>

int main()
{
	int n; std::cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++) std::cin>>arr[i];
	int currentMax = *arr;
	for(int i = 1; i<n; i++) currentMax = std::max(currentMax,*(arr+i));
	std::cout<<currentMax<<std::endl;
	return 0;
}
