#include<stdio.h>

int main()
{
	char c;
	scanf("%c",&c);
	int code = (int)c;

	if(code > 47 && code < 58){
		printf("IS DIGIT");
	}
	else if(code > 64 && code < 91){
		printf("IS CAPITAL");
	} else if(code > 96 && code < 123){
		printf("IS SMALL");
	}


	return 0;

}
