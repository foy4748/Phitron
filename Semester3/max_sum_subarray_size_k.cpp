// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
  long maximumSumSubarray(int K, vector<int> &Arr, int N) {
    // code here
    long long int prefix_sum[N];
    long long int max_num = 0;

    prefix_sum[0] = Arr[0];
    for (int i = 1; i < N; i++)
      prefix_sum[i] = prefix_sum[i - 1] + Arr[i];

    // for(long long c: prefix_sum)
    // cout<<c<<" "; cout<<"\n";

    for (int i = 0; i < N - K + 1; i++) {
      long long int lower = i == 0 ? 0 : prefix_sum[i - 1];
      long long int upper = prefix_sum[i + K - 1];
      long long predicted_max = upper - lower;
      // cout<<i<<"\t"<<i+K-1<<"\t"<<predicted_max<<endl;

      if (predicted_max > max_num)
        max_num = predicted_max;
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
