#include <stdio.h>

int main(){
	int a,b,c,d;
	long int result;
	int isEqual = 0;
	scanf("%d %d %d %d",&a,&b,&c,&d);

	result = a+b-c;
	if(result == d) {
		printf("YES\n");
		isEqual = 1;
	}


	result = a+b*c;
	if(result == d){ printf("YES\n"); isEqual = 1;};


	result = a-b+c;
	if(result == d){ printf("YES\n"); isEqual = 1;};


	result = a-b*c;
	if(result == d){ printf("YES\n"); isEqual = 1;};


	result = a*b+c;
	if(result == d){ printf("YES\n"); isEqual = 1;};


	result = a*b-c;
	if(result == d){ printf("YES\n"); isEqual = 1;};

	if(!isEqual)
		printf("NO\n");

	return 0;
}
