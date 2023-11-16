#include<bits/stdc++.h>

int main()
{
	int a, b;
	char comparare_operator;

	std::cin>>a; std::getchar(); std::cin>>comparare_operator; std::getchar(); std::cin>>b;

	switch (comparare_operator) {
		case '<':
			if(a<b){
				std::cout<<"Right"<<std::endl;
			}else{
				std::cout<<"Wrong"<<std::endl;
			}
			break;
		case '>':
			if(a>b){
				std::cout<<"Right"<<std::endl;
			}else{
				std::cout<<"Wrong"<<std::endl;
			}
			break;
		case '=':
			if(a==b){
				std::cout<<"Right"<<std::endl;
			}else{
				std::cout<<"Wrong"<<std::endl;
			}
			break;
		default:
			std::cout<<a<<" "<<comparare_operator<<" "<<b<<std::endl;
			break;
			
	}
	return 0;
}
