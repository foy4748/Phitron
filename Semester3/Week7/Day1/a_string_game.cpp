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
    int one = 0;
    int zero = 0;
    for (int i = 0; i < N; i++) {
      char x;
      cin >> x;
      if (x == '0')
        zero++;
      else
        one++;
    }

    int possible_pairs = min(one, zero);
    possible_pairs % 2 ? cout << "Zlatan"
                              << "\n"
                       : cout << "Ramos"
                              << "\n";
  }
  return 0;
}
