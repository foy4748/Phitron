#include<stdio.h>

#define dimenstion 5

//Print some patterns

// Triangle |_
void triangle(int n){
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<=i;j++){
			printf("*\t");
		}
		printf("\n");
	}
}

// Triangle |^
void triangleB(int n){
	int i,j;
	for(i=n; i>=0; i--){
		for(j=0; j<i;j++){
			printf("*\t");
		}
		printf("\n");
	}
}

void triangleC(int n){
	int i,j;
	for(i=n; i>=0; i--){
		for(j=0; j<n; j++){
			if(n - j > i){
				printf("\t");
			}
			else{
				printf("*\t");
			}
		}
		printf("\n");
	}
}

void triangleD(int n){
	int i,j;
	for(i=n; i>=1; i--){
		for(j=1;j<=n;j++){
			if((n-j) < (j-i) || i == j || j > i)
			printf("*\t");
			else{
				printf("\t");
			}
		}
		printf("\n");
	}
}

// Driver Code
int main(){
	printf("Triangle |_ \n");
	triangle(dimenstion);
	printf("Triangle B |^ \n");
	triangleB(dimenstion);
	printf("Triangle C ^| \n");
	triangleC(dimenstion);
	printf("Triangle D ^| \n");
	triangleD(dimenstion);
	return 0;
}
