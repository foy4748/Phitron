#include <stdio.h>

int main(){
	char C;
	scanf("%c", &C);
	if(C >= 'a' && C <= 'z'){
		printf("%c\n", (((C+1)-'a') % ('z' - 'a' + 1))+'a');
	}
	return 0;
}
