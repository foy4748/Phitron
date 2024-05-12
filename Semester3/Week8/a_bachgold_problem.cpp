#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  ll N;
  cin >> N;
  /* if (N == 2) { */
  /*   cout << 1 << '\n'; */
  /*   cout << 2 << '\n'; */
  /*   return 0; */
  /* } */
  /* vector<bool> result(N + 1, true); */
  /* for (ll i = 2; i * i <= N; i++) { */
  /*   if (result[i]) { */
  /*     for (ll j = i + i; j <= N; j += i) { */
  /*       result[j] = false; */
  /*     } */
  /*   } */
  /* } */

  ll c = 0;
  // ll sum = 0;

  if (N % 2 == 0) {
    for (int i = 0; i < (N / 2); i++) {
      c++;
    }
    cout << c << endl;
    vector<int> v((ll)(N / 2), 2);
    for (int x : v)
      cout << x << ' ';
    cout << '\n';
  } else {
    for (int i = 0; i < (N / 2) - 1; i++) {
      c++;
    }
    c++;
    cout << c << endl;
    vector<int> v((ll)((N / 2)), 2);
    v[(ll)(N / 2) - 1] = 3;
    for (int x : v) {
      cout << x << ' ';
      // sum += x;
    }
  }
  // sum == N ? cout << 'Y' << '\n' : cout << 'N' << '\n';

  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}
