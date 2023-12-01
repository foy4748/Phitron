#include<stdio.h>

int main()
{
	int target = 1, lastItemIdx = 3, size = 5;
	int arr[5] = {1,2,3,4};

	// Print Initial Array
	printf("Initial Array\n");
	for(int i = 0; i<size; i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");

	// Moving elements to side
	for(int i = lastItemIdx; i>=target; i--){
		arr[i+1] = arr[i];
	}
	// Setting the target
	arr[target] = 100;

	// Print Resultant Array
	printf("Updated Array\n");
	for(int i = 0; i<size; i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}
