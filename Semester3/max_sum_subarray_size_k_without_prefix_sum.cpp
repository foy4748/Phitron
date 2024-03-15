//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
  long maximumSumSubarray(int K, vector<int> &Arr, int N) {
    // code here
    // long long int prefix_sum[N];
    long long int max_num = 0;

    // prefix_sum[0] = Arr[0];
    // for(int i = 1; i<N; i++)
    //     prefix_sum[i] = prefix_sum[i-1] + Arr[i];

    // for(long long c: prefix_sum)
    // cout<<c<<" "; cout<<"\n";

    // Initialization
    long long int currentSum = 0;
    int L = 0, R = K - 1;
    for (int i = 0; i < K; i++) {
      currentSum += Arr[i];
    }

    int k = 0;
    while (k < N - K + 1) {
      if (currentSum > max_num)
        max_num = currentSum;
      currentSum -= Arr[L];
      L++;
      R++;
      currentSum += Arr[R];
      k++;
    }

    return max_num;
  }
};

//{ Driver Code Starts.
int main() {
  int t;
  cin >> t;
  while (t--) {
    int N, K;
    cin >> N >> K;
    ;
    vector<int> Arr;
    for (int i = 0; i < N; ++i) {
      int x;
      cin >> x;
      Arr.push_back(x);
    }
    Solution ob;
    cout << ob.maximumSumSubarray(K, Arr, N) << endl;
  }
  return 0;
}
// } Driver Code Ends
