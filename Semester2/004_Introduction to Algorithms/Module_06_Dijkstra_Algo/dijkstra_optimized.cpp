#include <bits/stdc++.h>
#include <queue>

using namespace std;

int n;
const int max_size = 100005;
vector<pair<int, int>> adjacent_list[max_size];
int distant[max_size];

class CompareQueueNodes {
public:
  bool operator()(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
  }
};

void dijkstra(int src) {
  priority_queue<pair<int, int>, vector<pair<int, int>>, CompareQueueNodes> q;

  //! Bug
  // memset(distant, INT_MAX, sizeof(distant));
  for (int i = 0; i < n; i++) {
    distant[i] = INT_MAX;
  }
  q.push({0, 0});
  distant[0] = 0;

  while (!q.empty()) {
    pair<int, int> p = q.top();
    int parent_node = p.first;
    int parent_distant = p.second;
    q.pop();

    cout << "(" << parent_node << " , " << parent_distant << ")" << endl;

    for (int i = 0; i < adjacent_list[parent_node].size(); i++) {
      pair<int, int> child = adjacent_list[parent_node][i];
      int node = child.first;
      int dis = child.second;
      if (distant[node] > parent_distant + dis) {
        distant[node] = parent_distant + dis;
        q.push({node, parent_distant + dis});
      }
    }
  }
}

int main() {
  // Write your code here
  int e;
  cin >> n >> e;
  while (e--) {
    int a, b, c;
    cin >> a >> b >> c;
    adjacent_list[a].push_back({b, c});
    adjacent_list[b].push_back({a, c});
  }

  for (int i = 0; i < n; i++) {
    cout << i << " | ";
    for (int j = 0; j < adjacent_list[i].size(); j++) {
      cout << "(" << adjacent_list[i][j].first << ","
           << adjacent_list[i][j].second << ")"
           << " ";
    }
    cout << endl;
  }

  dijkstra(0);
  for (int i = 0; i < n; i++) {
    cout << distant[i] << " ";
  }
  cout << endl;

  return 0;
}
