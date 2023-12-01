#include<stdio.h>

int main()
{
	int n; scanf("%d",&n);
	int i, k = n-1;
	// Upward Pyramid
	for(i=0; i<n; i++){
		for(int j = 0; j < k; j++)
		{
			printf(" ");
		}
		k--;
		for(int j = 0; j<(2*i+1); j++)
		{
			printf("*");
		}
		printf("\n");
	}


	k = 1;
	// Backward Pyramid
	for(i=n-2; i>=0; i--){
		for(int j = 0; j < k; j++)
		{
			printf(" ");
		}
		k++;
		for(int j = 0; j<(2*i+1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
