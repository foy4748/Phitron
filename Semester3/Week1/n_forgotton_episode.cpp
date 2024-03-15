#include <bits/stdc++.h>

using namespace std;

int main() {
  // Write your code here
  int N;
  cin >> N;
  int arr[100005] = {0};
  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    arr[x - 1] = 1;
  }

  for (int i = 0; i < N; i++) {
    if (!arr[i]) {
      cout << i + 1 << "\n";
      return 0;
    }
  }

  return 0;
}
