#include<stdio.h>
#include<stdlib.h>

// Utility Functions
void scan_a_matrix(int row, int  col, int arr[row][col]){
	for(int i = 0; i< row; i++){
		for(int j = 0; j < col; j++){
			scanf("%d", &arr[i][j]);
		}
	}
}

void print_a_matrix(int row, int col, int  arr[row][col]){
	for(int i = 0; i< row; i++){
		for(int j = 0; j < col; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}

int main()
{
	
	int size; scanf("%d",&size); int arr[size][size];

	scan_a_matrix(size,size,arr);

	int primary_diagonal_sum = 0, secondary_diagonal_sum = 0;

	int row_end = size - 1;

	for(int i = 0; i<size; i++){
		primary_diagonal_sum += arr[i][i];
		secondary_diagonal_sum += arr[i][row_end];
		row_end--;
	}

	int abs_difference = abs(primary_diagonal_sum-secondary_diagonal_sum);
	printf("%d\n",abs_difference);

	return 0;
}
