#include<stdio.h>
#include<string.h>

void check_palindrome(char *s, int left, int size){
	int right = size - 1;
	if(left > right){
		printf("NO\n");
		return;
	};

	if(s[left] == s[right]){
		printf("YES\n");
		return;
	}
	check_palindrome(s,left+1, size-1);
}

int main()
{
	char S[1005]; scanf("%s",S);

	check_palindrome(S, 0, strlen(S));
	return 0;
}
