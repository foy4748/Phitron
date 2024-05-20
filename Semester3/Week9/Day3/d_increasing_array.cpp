#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here
  int N;
  cin >> N;
  vector<ll> arr(N);
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  ll result = 0;
  for (int i = 1; i < N; i++) {
    if (arr[i] < arr[i - 1]) {
      result += abs(arr[i - 1] - arr[i]);
      arr[i] = arr[i - 1];
    }
  }
  cout << result << '\n';

  /*
  int T; cin>>T;
  while(T--){

  }
  */
  return 0;
}
