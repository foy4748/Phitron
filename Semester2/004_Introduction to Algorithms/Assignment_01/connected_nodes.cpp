#include <bits/stdc++.h>
#include <functional>

using namespace std;

const int max_size = 1005;

vector<int> adjacent_list[max_size];
int isSorted[max_size] = {false};

int main() {
  // Write your code here
  int N, E;
  cin >> N >> E;
  while (E--) {
    int i, j;
    cin >> i >> j;

    adjacent_list[i].push_back(j);
    adjacent_list[j].push_back(i);
  }

  int Q;
  cin >> Q;
  while (Q--) {
    int X;
    cin >> X;

    if (!isSorted[X]) {
      sort(adjacent_list[X].begin(), adjacent_list[X].end(), greater<int>());
      isSorted[X] = true;
    }

    if (adjacent_list[X].size() == 0) {
      cout << -1 << endl;
    } else {
      for (int num : adjacent_list[X]) {
        cout << num << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
