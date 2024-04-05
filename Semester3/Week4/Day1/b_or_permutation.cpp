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
    for (int i = N; i >= 1; i--) {
      cout << i << " ";
    }
    cout << "\n";
  }
  return 0;
}
