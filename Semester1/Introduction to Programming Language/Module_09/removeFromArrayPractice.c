#include<stdio.h>

int main()
{
	printf("Input Number of Elements: ");
	int size; scanf("%d",&size);
	int arr[size];
	printf("Input %d Elements: \n",size);
	for (int i = 0; i < size; i++) scanf("%d",&arr[i]);	
	//for (int i = 0; i < size; i++) printf("%d ",arr[i]);	
	printf("Input target index and target value: \n");
	int targetIdx; scanf("%d",&targetIdx);
	for(int i = targetIdx; i<size-1; i++) arr[i] = arr[i+1]; arr[size-1] = 0;
	
	for (int i = 0; i < size; i++) printf("%d ",arr[i]);	
	return 0;
}
