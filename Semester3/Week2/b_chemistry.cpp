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
    char arr[N];
    map<char, int> mp_char_freq;
    // map<int, int> freq_freq;

    for (int i = 0; i < N; i++) {
      char X;
      cin >> X;
      mp_char_freq[X]++;
      arr[i] = X;
    }

    int odd_freq_nums = 0;
    for (int i = 0; i < N; i++) {
      int freq = mp_char_freq[arr[i]];
      if (freq % 2 == 1)
        odd_freq_nums += freq;
    }

    int diff = odd_freq_nums - K;
    cout << K << "\t" << odd_freq_nums << "\t" << diff;
    diff == 0 || diff == 1 ? cout << "YES"
                                  << "\n"
                           : cout << "NO"
                                  << "\n";
  }
  return 0;
}
