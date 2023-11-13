#include<bits/stdc++.h>

int main()
{
	char c; std::cin>>c;
	int code = c;
	if(code >= (int)'a' && code<=(int)'z'){
		std::cout<<"ALPHA"<<"\n"<<"IS SMALL"<<std::endl;
		return 0;
	}
	if(code >= (int)'A' && code<=(int)'Z'){
		std::cout<<"ALPHA"<<"\n"<<"IS CAPITAL"<<std::endl;
		return 0;
	}
	if(code >= (int)'0' && code<=(int)'9'){
		std::cout<<"IS DIGIT"<<std::endl;
		return 0;
	}
	return 0;
}
