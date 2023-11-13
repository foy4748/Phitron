#include <stdio.h>

int main()
{
	int T;
	scanf("%d",&T);

	int currentNum;
	for(int i = 0; i<T; i++){
		scanf("%d",&currentNum);
		do {
			printf("%d ",currentNum % 10);
			currentNum /= 10;
		} while (currentNum != 0);
		printf("\n");
	}
	return 0;
}
