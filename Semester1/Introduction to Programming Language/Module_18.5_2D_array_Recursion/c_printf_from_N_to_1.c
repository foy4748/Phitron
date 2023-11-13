#include<stdio.h>

void printf_from_N_to_1(int* N){
	if(*N == 1){
		printf("%d",*N);
		 return;
	}
	printf("%d ",*N);
	*N = *N - 1;
	printf_from_N_to_1(N);
}

int main()
{
	
	int N; scanf("%d",&N);
	printf_from_N_to_1(&N);
	return 0;
}
