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
    char L, R, U, D;
    cin >> L >> R >> U >> D;

    int horizontal_axis = 1;
    int vertical_axis = 1;

    if (L - '0')
      horizontal_axis += 10;
    if (R - '0')
      horizontal_axis += 10;
    if (U - '0')
      vertical_axis += 10;
    if (D - '0')
      vertical_axis += 10;

    cout << horizontal_axis * vertical_axis << '\n';
  }
  return 0;
}
