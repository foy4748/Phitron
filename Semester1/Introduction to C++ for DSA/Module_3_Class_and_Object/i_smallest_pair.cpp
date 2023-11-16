#include<bits/stdc++.h>

int main()
{
	int T; std::cin>>T;
	for(int t = 0; t<T; t++){
		int n; std::cin>>n;
		int arr[n];
		for (int i = 0; i < n; i++) std::cin>>arr[i];

		// Flag for controlling 
		// first iteration
		int isFirst = 0;
		int min_sum;
		for(int i = 0; i<n-1; i++){
			for(int j = i+1; j<n; j++){
				//std::cout<<"[ "<<i+1<<" "<<j+1<<" ]"<<" ";
				int calculated_sum = arr[i]+arr[j]+j-i;
				if(!isFirst){
					isFirst = 1; // flag altered on first iteration
					min_sum = calculated_sum;
				}
				// if(min_sum > calculated_sum){
				// 	min_sum = calculated_sum;
				// }
				min_sum = std::min(min_sum, calculated_sum);
			}
			//std::cout<<std::endl;
		}

		std::cout<<min_sum<<std::endl;
	}
	return 0;
}
