#include<bits/stdc++.h>

int main()
{
	long long int a, b, c;
	char mathematical_operator;

	std::cin>>a; std::getchar(); std::cin>>mathematical_operator; std::getchar(); std::cin>>b;
	std::getchar(); std::getchar(); std::getchar(); std::cin>>c;

	switch (mathematical_operator) {
		case '+':
			if(a+b == c){
				std::cout<<"Yes"<<std::endl;
			}else{
				std::cout<<a+b<<std::endl;
			}
			break;
		case '-':
			if(a-b == c){
				std::cout<<"Yes"<<std::endl;
			}else{
				std::cout<<a-b<<std::endl;
			}
			break;
		case '*':
			if(a*b == c){
				std::cout<<"Yes"<<std::endl;
			}else{
				std::cout<<a*b<<std::endl;
			}
			break;
		default:
			std::cout<<a<<" "<<mathematical_operator<<" "<<b<<std::endl;
			break;
			
	}
	return 0;
}

