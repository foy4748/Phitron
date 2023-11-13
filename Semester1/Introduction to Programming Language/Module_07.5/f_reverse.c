#include <stdio.h>

int main()
{
	int N; scanf("%d",&N);
	int storage[N];
	for (int i = 0; i < N; i++) scanf("%d",&storage[i]);
	for(int i = N-1; i>= 0; i--) printf("%d ", storage[i]);
	
	return 0;
}
