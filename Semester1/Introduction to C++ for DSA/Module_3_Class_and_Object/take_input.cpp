#include<bits/stdc++.h>
class User{
	public:
		char name[100];
		int roll;
		int cls;
		User(char name[], int roll, int cls){
			strcpy((*this).name, name);
			(*this).roll = roll;
			(*this).cls = cls;
			// Using the direct syntax for
			// Dereferencing and Accessing
		}
};

int main()
{
	
	char testString1[100];
	int roll1, cls1;

	char testString2[100];
	int roll2, cls2;

	std::cin.getline(testString1,100);
	std::cin>>roll1>>cls1;

	getchar();

	std::cin.getline(testString2,100);
	std::cin>>roll2>>cls2;

	User testUser(testString1,roll1,cls1);
	User testUser2(testString2,roll2,cls2);

	std::cout<<testUser.name<<testUser.roll<<testUser.cls<<std::endl;
	std::cout<<testUser2.name<<testUser2.roll<<testUser2.cls<<std::endl;
	return 0;
}

