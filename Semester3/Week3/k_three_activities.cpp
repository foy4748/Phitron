#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;
class Compare {
  // Operator() overloading
public:
  bool operator()(pair<int, int> p1, pair<int, int> p2) {
    // new definition
    if (p1.second != p2.second) {
      return p1.first < p2.first;

    } else {
      return p1.first > p2.first;
    }
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    // int arrA[N], arrB[N], arrC[N];
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> arrA;
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> arrB;
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> arrC;
    for (int j = 0; j < 3; j++) {
      for (int i = 0; i < N; i++) {
        int X;
        cin >> X;
        if (j == 0)
          arrA.push({X, i});
        if (j == 1)
          arrB.push({X, i});
        if (j == 2)
          arrC.push({X, i});
      }
    }
    bool notEmpty1 = !arrA.empty();
    bool notEmpty2 = !arrB.empty();
    bool notEmpty3 = !arrC.empty();

    cout << arrA.top().first << " " << arrB.top().first << " "
         << arrC.top().first << "\n";
  }
  return 0;
}
