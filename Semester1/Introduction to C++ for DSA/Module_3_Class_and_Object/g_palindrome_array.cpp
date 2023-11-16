#include<iostream>

void check_Palindrome(int * arr, int size){
	int leftPtr = 0;
	int rightPtr = size-1;
	while(leftPtr<rightPtr){
		int * left = (arr+leftPtr);
		int * right = (arr+rightPtr);
		if(*left != *right){
			std::cout<<"NO"<<std::endl;
			return;
		}
		leftPtr++;
		rightPtr--;
	}
	std::cout<<"YES"<<std::endl;
}

int main()
{
	int N; std::cin>>N;
	int * arr = new int[N];
	for(int i = 0; i<N; i++) std::cin>>*(arr+i);

	check_Palindrome(arr,N);
	delete[] arr;
	return 0;
}
