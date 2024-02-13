#include <bits/stdc++.h>

using namespace std;

bool isFound = false;
const int Limit = (1e5) + 5;
int n, m;
bool isVisited[Limit];
int par[Limit];
int level[Limit];
vector<int> adj_list[2 * Limit];

void bfs(int src) {
  queue<int> q;
  q.push(src);
  isVisited[src] = true;
  level[src] = 1;
  par[src] = -1;

  while (!q.empty()) {
    int f = q.front();

    q.pop();

    if (f == n) {
      isFound = true;
      return;
    }

    for (int i = 0; i < adj_list[f].size(); i++) {
      int child = adj_list[f][i];

      if (!isVisited[child]) {
        isVisited[child] = true;
        par[child] = f;
        level[child] = level[f] + 1;
        q.push(child);
      }
    }
  }
}

int main() {
  // Write your code here
  cin >> n >> m;
  int temp = m;
  while (temp--) {
    int a, b;
    cin >> a >> b;
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
  }

  memset(isVisited, false, sizeof(isVisited));
  memset(par, -1, sizeof(par));

  bfs(1);
  if (isFound) {
    // cout << "YES" << endl;
    cout << level[n] << endl;

    stack<int> st;
    st.push(n);
    int temp = n;
    // cout << par[temp] << " ";
    while (temp != 1) {
      temp = par[temp];
      st.push(temp);
    }

    while (!st.empty()) {
      cout << st.top() << " ";
      st.pop();
    }
    cout << endl;

  } else {
    cout << "IMPOSSIBLE" << endl;
  }

  return 0;
}
