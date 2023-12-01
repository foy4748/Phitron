#include<stdio.h>

void print_digits_L_to_R(int N){
	if(N==0) return;
	int d = N % 10;
	print_digits_L_to_R(N/10);
	printf("%d ",d);
}

int main()
{
	int T; scanf("%d",&T);
	for (int i = 0; i < T; i++) {
		int N; scanf("%d",&N);
		if(N==0) {
			printf("%d\n",0);
			continue;
		}
		print_digits_L_to_R(N);
		printf("\n");
		
	}
	return 0;
}
