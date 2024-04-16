#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

bool check_kth_bit(int x, int k) { return (x >> k) & 1; }

int count_set_bits(int x) {
  int result = 0;
  for (int i = 0; i <= 32; i++) {
    if (check_kth_bit(x, i))
      result++;
  }
  return result;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  int n, m, k;
  cin >> n >> m >> k;
  int arr[m];

  for (int i = 0; i < m; i++) {
    cin >> arr[i];
  }
  int player;
  cin >> player;

  cout << "XOR"
       << "\t"
       << "bitCount"
       << "\n";
  int count = 0;
  for (int i = 0; i < m; i++) {
    int XOR = player ^ arr[i];
    int bitCount = 0;
    for (int i = 0; i <= 32; i++) {
      if (check_kth_bit(XOR, i))
        bitCount++;
      if (bitCount > k)
        break;
    }
    cout << XOR << "\t" << bitCount << "\n";
    if (bitCount <= k)
      count++;
  }

  cout << count << "\n";
  return 0;
}
