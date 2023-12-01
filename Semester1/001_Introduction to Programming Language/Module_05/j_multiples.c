#include <stdio.h>
void swap_vars(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int A, B;
	scanf("%d %d", &A, &B);
	if(A>B){
		swap_vars(&A,&B);
	}

	(B % A) ? printf("No Multiples") : printf("Multiples");


	return 0;
}
