#include<stdio.h>

int main()
{
	int N; scanf("%d",&N);
	int s,k;

	s=N-1;k=1;
	for (int i = 0; i < N; i++) {
		for(int j = 0; j<s; j++) printf(" ");	
		for(int j = 0; j<k; j++) printf("*");	
		s--; k+=2;
		printf("\n");
	}
	s=0;k=2*N-1;
	for (int i = 0; i < N; i++) {
		for(int j = 0; j<s; j++) printf(" ");	
		for(int j = 0; j<k; j++) printf("*");	
		s++; k-=2;
		printf("\n");
	}

	return 0;
}
