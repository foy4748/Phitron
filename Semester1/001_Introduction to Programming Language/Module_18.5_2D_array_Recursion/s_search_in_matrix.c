#include<stdio.h>

int main()
{
	int N,M; scanf("%d %d",&N,&M);
	int arr[N*M]; 
	for(int i = 0; i<N*M; i++) scanf("%d",&arr[i]);
	int X; scanf("%d",&X);
	int flag = 0;
	for(int i = 0; i<N*M; i++) if(arr[i] == X) flag = 1;

	if(!flag){
		printf("will take number\n");
	}else{
		printf("will not take number\n");
	}
	return 0;
}
