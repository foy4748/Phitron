#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int result = a - b;
	(result >= 0) ? printf("%d\n",result) : printf("%d\n",0);
	return 0;
}
