#include<stdio.h>

int main()
{
	int n; scanf("%d",&n);
	int i,k=1, s = n;

	for(int i = 0; i<2*n-1; i++){
		if(i < n ){
			for(int j = 0; j<s; j++)
			{
				printf(" ");
			}
			for(int j = 0; j < k; j++)
			{
				printf("*");
			}
			s--;
			k+=2;
		printf("\n");
		}
		if(i == n - 1){
			s = 2;
			k = n+1;
		}
		if(i > n -1){

		for(int j = 0; j< s; j++)
		{
			printf(" ");
		}
		for(int j = 0; j < k; j++)
		{
			printf("*");
		}
		s++;
		k-=2;
		printf("\n");
		}
	}
	return 0;
}

