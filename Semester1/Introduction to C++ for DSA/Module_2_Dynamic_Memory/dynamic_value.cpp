#include<bits/stdc++.h>

int main(){
	int size = 5;
	int * a = new int[size];
	int * b = new int[size];
	for(int i = 0; i<size; i++){
		int currentValue;
		std::cin>>currentValue;
		*(a+i) = currentValue;
		*(b+i) = currentValue;
	}
	int newSize = 8;
	a = new int[newSize];
	for(int i = 0; i<size; i++){
		*(a+i) = *(b+i);
	}
	for(int i = size; i<newSize; i++){
		int currentValue;
		std::cin>>currentValue;

		*(a+i) = currentValue;
	}

	for(int i = 0; i<newSize; i++){
		std::cout<<*(a+i)<<std::endl;
	}

	return 0;
}

