#include<stdio.h>

int main(){
	int n; scanf("%d",&n);
	int storage[n];

	for(int i = 0; i<n; i++) scanf("%d",&storage[i]);
	

	int target; scanf("%d\n",&target);
	for (int i = 0; i < n; i++) {
		if(storage[i] == target){
			printf("%d\n",i);
			return 0;
		}	
	}


	printf("%d\n",-1);
	return 0;
}
