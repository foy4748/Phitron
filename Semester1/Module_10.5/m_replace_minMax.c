#include<stdio.h>

int main()
{
	int N; scanf("%d",&N);
	int arr[N];
	for(int i = 0; i<N; i++) scanf("%d",&arr[i]);

	int min_num = arr[0];
	int min_idx = 0;

	int max_num = arr[0];
	int max_idx = 0;
	for(int i =0; i<N; i++){
		if(arr[i] < min_num){
			min_num = arr[i];
			min_idx = i;
		}

		if(arr[i] > max_num){
			max_num = arr[i];
			max_idx = i;
		}
	}

	/* printf("Min Num | Min Idx | Max Num | Max Idx\n"); */
	/* printf("%d %d %d %d\n",min_num, min_idx, max_num, max_idx); */
	int temp = arr[min_idx];
	arr[min_idx] = arr[max_idx];
	arr[max_idx] = temp;

	for(int i = 0; i<N; i++) printf("%d ",arr[i]);

	return 0;
}
