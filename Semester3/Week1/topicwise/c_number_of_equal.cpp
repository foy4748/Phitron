#include <bits/stdc++.h>

using namespace std;

int main() {
  // Write your code here
  int N, M;
  cin >> N >> M;
  int arr1[N], arr2[M];
  for (int i = 0; i < N; i++)
    cin >> arr1[i];
  for (int i = 0; i < M; i++)
    cin >> arr2[i];

  int i = 0, j = 0;
  long long int ans = 0;
  while (i < N && j < M) {
    long long int count1 = 0, count2 = 0;
    int currentNum = arr1[i];
    while (arr1[i] == currentNum && i < N) {
      count1++;
      i++;
    }
    while (arr2[j] < currentNum)
      j++;

    while (arr2[j] == currentNum && j < M) {
      count2++;
      j++;
    }
    ans += (count1 * count2);
  }

  cout << ans << "\n";

  return 0;
}
