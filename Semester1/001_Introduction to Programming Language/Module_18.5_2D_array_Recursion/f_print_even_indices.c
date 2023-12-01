#include<stdio.h>

void printf_even_indices_reverse(int*arr,int*s){

	// Base Case
	int lastIdx = *s - 1;
	if(lastIdx < 0) return;

	// Recursive Case
	int currentNum = *(arr+lastIdx);

	if(!(lastIdx % 2)) printf("%d ",currentNum);
	*s = lastIdx;
	printf_even_indices_reverse(arr, s);
}

int main()
{
	//Declaring size & array;
	int size; scanf("%d",&size); int arr[size];

	//Input array elements
	for(int i = 0; i<size; i++) scanf("%d",&arr[i]);

	printf_even_indices_reverse(arr,&size);
	return 0;
}
