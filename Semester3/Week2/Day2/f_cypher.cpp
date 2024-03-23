#include <bits/stdc++.h>
#define endl "\n"
//#define ll long long int

using namespace std;

void reverse_perform(char C, int &current_num) {
  if (C == 'U') {
    current_num--;
    if (current_num == -1)
      current_num = 9;
  } else if (C == 'D') {
    current_num++;
    if (current_num == 10)
      current_num = 0;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code here

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
      cin >> arr[i];
    for (int i = 0; i < N; i++) {
      int X;
      cin >> X;
      for (int j = 0; j < X; j++) {
        char Y;
        cin >> Y;
        reverse_perform(Y, arr[i]);
      }
    }

    for (int i = 0; i < N; i++) {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}
