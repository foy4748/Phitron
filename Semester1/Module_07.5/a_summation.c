#include <stdio.h>

int main()
{
	int n;
	scanf("%d\n",&n);
	//long long int storage[n];
	long long int sum = 0;

	for(int i = 0; i<n; i++){
		//scanf("%ld ",&storage[i]);
		long long int num;
		scanf("%lld",&num);
		sum += num;
	}

	printf("%lld", (sum < (long long int) 0) ? (long long int)(-1)*sum : sum);
	return 0;
}

