
#include <bits/stdc++.h>

using namespace std;

int main() {
  // Write your code here
  int T;
  cin >> T;
  while (T--) {
    int N;
    char s; // starting char
    string sequence;

    cin >> N >> s >> sequence;

    int sequence_size = sequence.size();

    if (s == 'g') {
      cout << 0 << "\n";
      continue;
    }

    sequence += sequence;

    int result = 0, count = 0;
    for (int i = 0; i < sequence_size; i++) {
      if (sequence[i] == s) {
        count = 0;
        while (sequence[i] != 'g') {
          count++;
          i++;
        }
        result = max(result, count);
      }
    }

    cout << result << "\n";
  }
  return 0;
}
