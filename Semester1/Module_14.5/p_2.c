#include<stdio.h>

int main()
{
	int n; scanf("%d",&n);
	int s,k, i,j;

	s = 0; k = 2*n-1;
	for (i = 0; i < n; ++i) {
		for(j=0; j<s; j++)printf(" ");
		for(j=0; j<k; j++)printf("*");
		s++;k-=2;
		printf("\n");
	}
	return 0;
}

