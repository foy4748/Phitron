#include <stdio.h>

int main()
{
	long long int result = 0;
	// Taking Inputs
	int n = 3;
	long long int vars[n];
	for(int i = 0; i<n; i++){
		scanf("%lld",&vars[i]);
	}

	// Finding Min Value
	long long int min_value = vars[0];
	for(int i=1; i<n; i++){
		if(vars[i] < min_value) min_value = vars[i];
	}
	result += min_value;
	for(int i = 0; i<n; i++){
		vars[i] -= min_value;
	}
	result += (vars[0]/(long long int)2 <= vars[2]) ? vars[0]/(long long int)2 : vars[2];

	printf("%lld\n",result);
	return 0;	
}

