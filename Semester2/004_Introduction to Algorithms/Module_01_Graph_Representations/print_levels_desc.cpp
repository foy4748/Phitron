#include <bits/stdc++.h>

using namespace std;

int adjacent_arr[1005][1005];
vector<int> adjacent_list[1005];

void level_elements(int source, int lvl) {

  int max_node_val;
  int level[1005];
  stack<int> st;
  bool visited[1005] = {false};
  memset(level, -1, sizeof(level));

  queue<int> q;
  q.push(source);
  max_node_val = source;

  visited[source] = true;
  level[source] = 0;

  while (!q.empty()) {
    int par = q.front();
    q.pop();

    cout << par << " ";

    vector<int> children = adjacent_list[par];
    for (int i = 0; i < children.size(); i++) {
      int singleChild = children[i];
      if (!visited[singleChild]) {
        if (singleChild > max_node_val)
          max_node_val = singleChild;
        q.push(singleChild);
        visited[singleChild] = true;
        level[singleChild] = level[par] + 1;
        if (level[singleChild] == lvl)
          st.push(singleChild);
      }
    }
  }
  cout << endl;
  cout << "Printing" << lvl << " Level nodes" << endl;
  while (!st.empty()) {
    int top = st.top();
    cout << top << " ";
    st.pop();
  }
  cout << endl;
}

int main() {
  // Write your code here

  int n, e;
  cin >> n >> e;
  memset(adjacent_arr, 0, sizeof(adjacent_arr));

  while (e--) {
    int a, b;
    cin >> a >> b;
    adjacent_arr[a][b] = 1;
    adjacent_arr[b][a] = 1;

    adjacent_list[a].push_back(b);
    adjacent_list[b].push_back(a);
  }

  cout << "\nPrinting Adjacent MATRIX" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << adjacent_arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << "\nPrinting Adjacent LIST" << endl;
  for (int i = 0; i < n; i++) {
    cout << i << " | ";
    for (int j = 0; j < adjacent_list[i].size(); j++) {
      cout << adjacent_list[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  int givenLevel;
  cin >> givenLevel;
  level_elements(0, givenLevel);

  return 0;
}
