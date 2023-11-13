#include<stdio.h>

int main()
{
	int N; scanf("%d",&N);
	int lowest; scanf("%d",&lowest);
	int lowest_idx = 0;
	for (int i = 1; i < N; i++) {
		int num; scanf("%d",&num);	
		if(num < lowest){
			lowest = num;
			lowest_idx = i;
		}
	}

	printf("%d %d",lowest, lowest_idx+1);
	return 0;
}
