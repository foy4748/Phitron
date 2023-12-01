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
	
	char testString[100] = "Checkout C++";
	User testUser(test,5,9);
	std::cout<<testUser.name<<testUser.roll<<testUser.cls<<std::endl;
	return 0;
}
