#include<stdio.h>
#include<string.h>

int main()
{
	char name[30];
	printf("Enter your name: \t");
	gets(name);
	printf("Name Recorded: \t");
	puts(name);
	return 0;
}
