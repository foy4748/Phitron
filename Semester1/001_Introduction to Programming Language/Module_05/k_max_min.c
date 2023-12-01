#include<stdio.h>

int main()
{
	int n = 3;
	int arr[n];
	for(int i =0; i<n; i++){
		if(i == n-1){
			scanf("%d",&arr[i]);
		}else{
		scanf("%d ",&arr[i]);
		}
	}
	int min_num = arr[0]; 
	int max_num = arr[0];

	for(int i = 1; i<n; i++){
		if(arr[i] > max_num){
			max_num = arr[i];
		}
		if(arr[i] < min_num){
			min_num = arr[i];
		}
	}

	printf("%d %d",min_num, max_num);

	return 0;
}
