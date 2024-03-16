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
  int result = 0;
  while (j != M) {
    while (arr1[i] < arr2[j] && i != N) {
      result++;
      i++;
    }
    j++;
    cout << result << " ";
  }

  return 0;
}
