#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    set<int> st;
    int arr[N][N - 1];
    map<int, int> mp;
    map<int, vector<int>> mp2;

    int result_row = -1;
    int end_num = -1;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N - 1; j++) {
        cin >> arr[i][j];
        if (j == N - 2) {
          mp[arr[i][j]]++;
          mp2[arr[i][j]].push_back(i);
        }
      }
    }

    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
      if (it->second == 1) {
        result_row = mp2[it->first][0];
      } else {
        end_num = it->first;
      }
    }
    for (int c : arr[result_row])
      cout << c << " ";
    cout << end_num << "\n";
  }
  return 0;
}
