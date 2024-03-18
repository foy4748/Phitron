// !! Important
#include <bits/stdc++.h>
#include <queue>
#define endl "\n"
#define ll long long int

using namespace std;

// Thanks to this youtube video
// https://www.youtube.com/watch?v=Z5NHoo-KdxA&t=333s

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Example Test Case
  // N K
  // 8 3
  // 12 -1 -7 8 -15 30 16 28

  // Write your code here
  int N, K;
  cin >> N >> K;
  ll arr[N];
  queue<ll> q;

  for (int i = 0; i < N; i++)
    cin >> arr[i];

  for (int i = 0; i < K - 1; i++) {
    if (arr[i] < 0)
      q.push(arr[i]);
  }

  //     i starts from
  //     first window's last index
  for (int i = K - 1; i < N; i++) {
    if (arr[i] < 0)
      q.push(arr[i]);

    if (!q.empty()) {
      cout << q.front() << " ";
      if (arr[i - K + 1] == q.front()) {
        q.pop();
      }
    } else {
      cout << 0 << " ";
    }
  }

  return 0;
}
