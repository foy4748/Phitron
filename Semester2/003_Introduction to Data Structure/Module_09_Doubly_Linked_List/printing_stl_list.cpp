#include<bits/stdc++.h>

using namespace std;

void print_straight(list<int> givenList){
	cout<<"L -> ";
	for(int itm : givenList) cout<<itm<<" ";
	cout<<endl;
}

void print_reverse(list<int> givenList){
	cout<<"R -> ";
	for(auto it = givenList.rbegin(); it != givenList.rend(); it++) cout<<*it<<" ";
	cout<<endl;
}

void print_myList(list<int> givenList){
	print_straight(givenList);
	print_reverse(givenList);
}



int main()
{
	// Write your code here
	list<int> myList;
	myList.push_back(5);
	myList.push_back(15);
	myList.push_back(20);

	print_myList(myList);
	return 0;
}
