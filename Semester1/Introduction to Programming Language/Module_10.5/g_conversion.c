#include<stdio.h>
#include<string.h>

char convertCase(char c){

	int code = (int)c;
	int result;

	if(code >= 'A' && code <= 'Z'){
		result = code + 32;
	} else if(code >= 'a' && code <= 'z'){
		result = code - 32;
	}
	return (char)result;
}

int main()
{
	
	char s[100005];
	scanf("%s",s);
	int length = strlen(s);
	for(int i = 0; i<length; i++){
		if((s[i] >= 'a' && s[i] <='z') || (s[i] >='A' && s[i] <= 'Z')){
			s[i] = convertCase(s[i]);
		}else if(s[i] == ','){
			s[i] = ' ';
		}
	}
	printf("%s",s);
	return 0;
}
