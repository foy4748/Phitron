#include<bits/stdc++.h>

int main()
{
	int N; std::cin>>N;
	int * A = new int[N];
	for (int i = 0; i < N; i++)  std::cin>>*(A+i);
	int M; std::cin>>M;
	if(M < N) {
		std::cout<<"M can't be less than N"<<std::endl;
		return 0;
	}
	int * B = new int[M];
	for(int i = 0; i<N; i++) *(B+i) = *(A+i);
	delete[] A;

	for (int i = N; i < M; i++)  std::cin>>*(B+i);
	for(int i = 0; i<M; i++) std::cout<<*(B+i)<<" "; std::cout<<std::endl;
	std::cout<<std::endl;
	delete[] B;

	return 0;
}
