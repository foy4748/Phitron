#include<stdio.h>

int main()
{
	int n; scanf("%d",&n); int arr1[n]; 
	for(int i = 0; i<n; i++) scanf("%d",&arr1[i]);

	int m; scanf("%d",&m); int arr2[m]; 
	for(int i = 0; i<m; i++) scanf("%d",&arr2[i]);

	int answer[n+m];
	int trace = 0;
	for(int i = 0; i<n; i++) {
		answer[trace] = arr1[i];
		trace++;
	}

	for(int i = 0; i<m; i++) {
		answer[trace] = arr2[i];
		trace++;
	}
	for(int i = 0; i<n+m; i++) printf("%d ",answer[i]);


	return 0;
}
