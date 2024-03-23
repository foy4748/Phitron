#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  string spelling = "Timur";
  sort(spelling.begin(), spelling.end());

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;

    string input_str;
    cin >> input_str;
    sort(input_str.begin(), input_str.end());
    if (N != 5) {
      cout << "NO"
           << "\n";
      continue;
    }
    if (spelling == input_str) {
      cout << "YES"
           << "\n";
    } else {
      cout << "NO"
           << "\n";
    }
  }

  return 0;
}
