#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  string str1;
  string str2;

  cin >> str1 >> str2;

  int str1Size = str1.size();
  int str2Size = str2.size();
  if (str1Size == 0) {
    cout << str2Size << '\n';
    return 0;
  }
  if (str2Size == 0) {
    cout << str1Size << '\n';
    return 0;
  }

  int r1 = str1Size;
  int r2 = str2Size;

  // Test
  /* cout << r1 << ' ' << r2 << '\n'; */
  // /////////////

  while (str1[r1 - 1] == str2[r2 - 1] && str1[r1 - 1] != '\0' &&
         str2[r2 - 1] != '\0') {
    r1--;
    r2--;
  }

  int result = r1 + r2;
  cout << result << '\n';

  return 0;
}
