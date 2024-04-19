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
    int a, b, c;
    cin >> a >> b >> c;
    int secondLiftTime = c + abs(c - b);
    // cout << secondLiftTime << "\n";
    if (a == secondLiftTime) {
      cout << 3 << "\n";
    } else if (a < secondLiftTime)
      cout << 1 << "\n";
    else
      cout << 2 << "\n";
  }
  return 0;
}
