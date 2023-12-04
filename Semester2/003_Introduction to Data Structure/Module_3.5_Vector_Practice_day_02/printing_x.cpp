#include<bits/stdc++.h>

using namespace std;



int main()
{
	// Write your code here
    int N; cin>>N; char arr[N][N];	
	int temp = N-1;
	// Populating 2D array
	// using space
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			arr[i][j] = ' ';
		}
	}

	// Populating array
	// using symbols
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			if(i == j){
				arr[i][j] = '\\';
			}

			arr[i][temp] = '/';

		}
		temp--;
	}
	arr[N/2][N/2] = 'X';

	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}

	return 0;
}
