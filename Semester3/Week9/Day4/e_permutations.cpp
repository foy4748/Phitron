#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int N;
  cin >> N;
  if (N > 1 && N <= 3) {
    cout << "NO SOLUTION" << '\n';
    return 0;
  } else {
    if (N == 4) {
      cout << "2 4 1 3" << '\n';
      return 0;
    }
    for (int i = N; i >= 1; i--) {
      if (i % 2 == 0)
        cout << i << ' ';
    }
    for (int i = N; i >= 1; i--) {
      if (i % 2)
        cout << i << ' ';
    }
    cout << '\n';
  }
  return 0;
}
