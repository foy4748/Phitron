#include <stdio.h>

int end_of_file(){
	int n;
	scanf("%d",&n);
	if(n==1999){
		printf("Correct\n");
		return 0;
	}
	printf("Wrong\n");
	return end_of_file();
}

int main()
{

	
	return end_of_file();
}
