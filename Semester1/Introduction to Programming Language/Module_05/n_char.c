#include<stdio.h>

int main()
{
	char c;
	scanf("%c",&c);
	int code = (int)c;
	int result;

	if(code > 64 && code < 91){
		result = code + 32;
	} else if(code > 96 && code < 123){
		result = code - 32;
	}


	printf("%c",(char)result);
	return 0;

}
