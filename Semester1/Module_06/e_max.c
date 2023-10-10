#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	int input;
	int max, min;

	scanf("%d",&input);
	max = input; min = input;
	
	for(int i = 2; i<=n; i++){
		scanf("%d",&input);
		if(input > max) max = input;
		if(input < min) min = input;
	}

	printf("%d\n",max);
	return 0;
}
