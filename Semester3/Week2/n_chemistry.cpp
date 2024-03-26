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
    int N, K;
    cin >> N >> K;
    int remaining_slot = N - K;
    char arr[N];
    map<char, int> mp_char_freq;
    // map<int, int> freq_freq;

    for (int i = 0; i < N; i++) {
      char X;
      cin >> X;
      mp_char_freq[X]++;
      arr[i] = X;
    }

    int oddFreqCount = 0;
    for (int i = 0; i < 26; i++) {
      char x = 'a' + i;
      int freq = mp_char_freq[x];
      if (freq % 2 != 0)
        oddFreqCount++;
    }
    if (oddFreqCount - 1 < 0)
      oddFreqCount = 0;
    else
      oddFreqCount--;

    if (oddFreqCount <= K)
      cout << "YES"
           << "\n";
    else
      cout << "NO"
           << "\n";
  }
  return 0;
}
