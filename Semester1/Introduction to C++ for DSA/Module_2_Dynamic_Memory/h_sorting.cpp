#include<bits/stdc++.h>

void sortArr(int * arr, int size){
	for(int i = 0; i<size-1; i++){
		for(int j = i+1; j<size; j++){
			int * left	=  (arr+i);
			int * right =  (arr+j);
			if(*left > *right){
				std::swap(*left, *right);
			}
		}
	}
}

int main()
{
	int n; std::cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++) std::cin>>arr[i];
	sortArr(arr,n);
	for(int i = 0; i<n; i++) std::cout<<arr[i]<<" "; std::cout<<std::endl;
	
	return 0;
}
