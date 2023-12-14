#include<bits/stdc++.h>

using namespace std;



int main()
{
	// Write your code here
	list<int> myList = {1,2,3};
	/* for(int itm : myList){ */
	/* 	cout<<itm<<endl; */
	/* } */

	list<int> newList = {4, 5 ,6};
	myList.assign(newList.begin(), newList.end());
	myList.pop_front();
	myList.insert(next(myList.begin(),2), newList.begin(), newList.end());
	for(int itm : myList){
		cout<<itm<<endl;
	}
	cout<<"Accessing index 3 value"<<endl;
	int a = *next(myList.begin(), 3);
	cout<<a<<endl;

	return 0;
}
