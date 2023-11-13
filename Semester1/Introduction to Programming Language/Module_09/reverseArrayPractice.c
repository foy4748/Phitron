#include<stdio.h>

int main()
{
	int size; scanf("%d",&size);
	int leftPtr = 0, rightPtr = size-1;
	int arr[size];
	for(int i = 0; i<size; i++) scanf("%d",&arr[i]);

	while(leftPtr < rightPtr){

		// Swaping Variables 
		// Thanks GeeksForGeeks
		(arr[leftPtr] ^= arr[rightPtr]), (arr[rightPtr] ^= arr[leftPtr]), (arr[leftPtr] ^= arr[rightPtr]);

		// Changing Pointer Indices
		leftPtr++; rightPtr--;

	}
	for(int i = 0; i<size; i++) printf("%d ",arr[i]);
	return 0;
}
