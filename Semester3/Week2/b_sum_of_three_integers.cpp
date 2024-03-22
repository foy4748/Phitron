#include <iostream>

using namespace std;

int main() {
  int K, S;
  cin >> K >> S;
  int count = 0;
  for (int i = 0; i <= K; i++) {
    for (int j = 0; j <= K; j++) {
      int xy = i + j;
      int z = S - xy;
      if (z >= 0 && z <= K && xy + z == S)
        count++;
    }
  }
  cout << count << "\n";
}
