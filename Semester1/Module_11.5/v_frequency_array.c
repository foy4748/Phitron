#include<stdio.h>

int main()
{
	int N,M; scanf("%d %d",&N,&M);
	int num[N], freq[M];
	for(int i = 0; i<N; i++) scanf("%d",&num[i]);
	for(int i = 0; i<M; i++) freq[i] = 0;

	for(int i = 0; i<N; i++){
		int idx = num[i] - 1;
		freq[idx]++;
	}
	for (int i =0; i<M; i++) printf("%d\n",freq[i]);
	return 0;
}
