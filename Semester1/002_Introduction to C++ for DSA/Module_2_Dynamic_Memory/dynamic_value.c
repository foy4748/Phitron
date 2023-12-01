#include<stdio.h>
#include<stdlib.h>

int * test(int n){
	int * a =  malloc(n*sizeof(int));
	for(int i = 0; i<n; i++) *(a+i) = i; 
	return a;
}

int main()
{
	int n; scanf("%d",&n);
	int * p = test(n);
	printf("%d\n",*(p+1));
	return 0;
}
