#include <stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	int digit1 = n % 10;
	int digit2 = n / 10;
	(digit1 % digit2 == 0 || digit2 % digit1 == 0) ? printf("YES\n") : printf("NO\n");
	return 0;
}
