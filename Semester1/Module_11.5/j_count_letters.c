#include<stdio.h>
#include<string.h>

int main()
{
	char S[1000000]; scanf("%s",S);

	// Works in Trainer
	//char S[10000002]; scanf("%s",S); //Doesn't work in my PC's C compiler

	int freq[26]={0};
	int L = strlen(S);
	for(int i = 0; i < L; i++){
		int idx = S[i] - 'a';
		freq[idx]++;
	}

	for(int i = 0 ; i<26; i++){
		if(freq[i]) printf("%c : %d\n",i+'a',freq[i]);
	}
	return 0;
}
