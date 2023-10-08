#include <stdio.h>

int intPow(int base, int power){
    int mult = 1;
    for(int i=0; i<power; i++){
        mult *= base;
    }
    return mult;
}

int nthDigit(int num,int pos){
    int result =(num % intPow(10,pos))/intPow(10,pos-1);
    return result;

}

int main(){
	int N;
	scanf("%d",&N);
	int firstDigit = nthDigit(N,4);
	(firstDigit%2) ? printf("ODD") : printf("EVEN");
	return 0;
}
