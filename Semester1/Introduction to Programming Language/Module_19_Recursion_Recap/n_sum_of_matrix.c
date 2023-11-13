#include<stdio.h>

int main()
{
	int row, col; scanf("%d %d", &row, &col);

	int A[row][col]; int B[row][col];  int C[row][col]; 

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d",&A[i][j]);
		}	
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d",&B[i][j]);
		}	
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			C[i][j] = A[i][j] + B[i][j];	
			printf("%d ",C[i][j]);
		}	
		printf("\n");
	}
	return 0;
}
