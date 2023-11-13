#include <stdio.h>
int main()
{
	int n; scanf("%d", &n);

	for(int i = 0; i<n; i++){
		int num; scanf("%d", &num);
		if(num <= 10){
			printf("A[%d] = %d\n", i, num);
		}
	}
}
