#include<stdio.h>

int main()
{
	char X[22]; scanf("%s",X);
	char Y[22]; scanf("%s",Y);

	int i = 0;
	while(1){
		if(X[i] == '\0' && Y[i] == '\0'){
			printf("%s",X);
			break;
		}else if(X[i] == '\0'){
			printf("%s",X);
			break;
		}else if(Y[i] == '\0'){
			printf("%s",Y);
			break;
		}

		if(X[i] == Y[i])
		{
			i++;
		}else if(X[i] < Y[i]){
			printf("%s",X);
			break;
		}else{
			printf("%s",Y);
			break;
		}
	}
	return 0;
}
