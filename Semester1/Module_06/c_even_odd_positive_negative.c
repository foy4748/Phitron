#include <stdio.h>

int main()
{
	int N;
	scanf("%d",&N);

	int currentNum;
	int even = 0, odd = 0, pos = 0, neg = 0;

	for(int i = 0; i<N; i++){
		scanf("%d",&currentNum);
		if(currentNum % 2 == 0) even++;
		if(currentNum % 2 == 1 || currentNum % 2 == -1) odd++;
		if(currentNum > 0) pos++;
		if(currentNum < 0) neg++;

	}
	printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);
	return 0;	
}
