#include<bits/stdc++.h>

int main()
{
	//int n; std::cin>>n;
	int n = 3;
	int arr[n];
	for(int i = 0; i<n; i++) std::cin>>arr[i];
	int currentMax = *arr;
	int currentMin = *arr;
	for(int i = 1; i<n; i++) {
		currentMax = std::max(currentMax,*(arr+i));
		currentMin = std::min(currentMin,*(arr+i));
	}
	std::cout<<currentMin<<" "<<currentMax<<std::endl;
	return 0;
}

