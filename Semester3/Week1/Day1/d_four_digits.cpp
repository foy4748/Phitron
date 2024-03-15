#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<char> result;
  for (int i = 0; i < 4; i++) {
    int digit = N % 10;
    // cout << digit;
    result.push_back(digit + '0');
    N /= 10;
  }
  reverse(result.begin(), result.end());
  string resutl_str(result.begin(), result.end());
  cout << resutl_str;

  return 0;
}
