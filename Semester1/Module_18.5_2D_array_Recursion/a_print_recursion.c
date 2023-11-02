#include<stdio.h>

void print_recursion(int*N){
	if(*N == 0) return;
	*N = *N - 1;
	printf("Fart\n");
	print_recursion(N);
}


int main()
{
	int N; scanf("%d",&N);
	print_recursion(&N);
	return 0;
}
