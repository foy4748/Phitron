#include <bits/stdc++.h>

using namespace std;

int main() {
  // Write your code here
  int N1, N2;
  cin >> N1 >> N2;
  vector<int> arr1;
  vector<int> arr2;

  for (int i = 0; i < N1; i++) {
    int x;
    cin >> x;
    arr1.push_back(x);
  }
  for (int i = 0; i < N2; i++) {
    int x;
    cin >> x;
    arr2.push_back(x);
  }

  int it1 = 0;
  int it2 = 0;
  long long answer = 0;

  for (it2 = 0; it2 < N2; it2++) {
    while (it1 < N1 && arr1[it1] < arr2[it2]) {
      answer++;
      it1++;
    }
    cout << answer << " ";
  }
  cout << "\n";

  return 0;
}
