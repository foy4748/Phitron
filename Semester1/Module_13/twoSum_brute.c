#include<stdio.h>

int main()
{
	int x; scanf("%d",&x);
	int n; scanf("%d",&n);
	int arr[n];
	for(int i = 0; i<n; i++) scanf("%d",&arr[i]);

	for(int i = 0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if(arr[i]+arr[j] == x){
				printf("Match Found!\n");
				return 0;
			}
		}
	}
	printf("Not Found\n");
	return 0;
}
