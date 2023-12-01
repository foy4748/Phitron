#include <stdio.h>

int main()
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);

	if(n==1){
		printf("%d",-1);
		return 0;
	}

	for(int i=2; i<=n; i+=2){
		printf("%d\n",i);
	}

	return 0;
}
