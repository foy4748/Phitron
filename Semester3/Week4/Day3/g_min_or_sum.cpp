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
    int arr[N];
    int or_of_all_elems = 0;
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
      or_of_all_elems |= arr[i];
    }
    cout << or_of_all_elems << "\n";
  }
  return 0;
}
