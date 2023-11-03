#include<stdio.h>

void small_to_capital(void) { 
	char c; scanf("%c",&c);
	printf("%c\n", c-32);
}

int main()
{
	small_to_capital();
	small_to_capital();
	small_to_capital();
	return 0;
}
