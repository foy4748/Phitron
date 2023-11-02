#include<stdio.h>

void printf_from_1_to_N(int* N, int init){
	if(*N < init) return;
	printf("%d\n",init);
	printf_from_1_to_N(N,init+1);
}

int main()
{
	int N; scanf("%d",&N);
	printf_from_1_to_N(&N,1);
	return 0;
}
