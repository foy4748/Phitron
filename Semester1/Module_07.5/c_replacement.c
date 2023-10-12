#include <stdio.h>

int main()
{
	int n; scanf("%d",&n);
	int storage[n];

	for(int i = 0; i<n; i++){
		int num; scanf("%d ",&num);
		if(num < 0){
			storage[i] = 2;
			continue;
		}

		if(num > 0){
			storage[i] = 1;
			continue;
		}

		storage[i] = num;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ",storage[i]);
	}
	printf("\n");

	return 0;
}
