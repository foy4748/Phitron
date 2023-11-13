#include<stdio.h>

void l_summation(int* arr, int *N, long long int *acc){
	*N = *N - 1;
	if(*N < 0) return;

	*acc = *acc + *(arr+(*N));
	l_summation(arr,N,acc);
}

int main()
{
	//Declaring size & array;
	int N; scanf("%d",&N); int arr[N];

	// Accumulator
	long long int acc = 0;

	//Input array elements
	for(int i = 0; i<N; i++) scanf("%d",&arr[i]);

	// Storing the summation
	// in Accumulator
	l_summation(arr,&N,&acc);

	// Now printing the summation
	printf("%lld\n",acc);

	return 0;
}
