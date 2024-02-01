#include <bits/stdc++.h>

using namespace std;

class Edge {
public:
  int n1, n2, w;
  Edge(int n1, int n2, int w) {
    this->n1 = n1;
    this->n2 = n2;
    this->w = w;
  }
};

int main() {
  // Write your code here
  int n, edge;
  cin >> n >> edge;
  vector<Edge> edgeList;
  int e = edge;
  while (e--) {
    int n1, n2, w;
    cin >> n1 >> n2 >> w;
    edgeList.push_back(Edge(n1, n2, w));
    edgeList.push_back(Edge(n2, n1, w));
  }

  int distant[n];
  for (int i = 0; i < n; i++) {
    distant[i] = INT_MAX;
  }
  distant[0] = 0;

  for (int i = 0; i < n; i++) {
    for (int e = 0; e < 2 * edge; e++) {
      Edge currentEdge = edgeList[e];
      int n1 = currentEdge.n1;
      int n2 = currentEdge.n2;
      int w = currentEdge.w;
      if (distant[n1] < INT_MAX && distant[n2] > w + distant[n1]) {
        distant[n2] = w + distant[n1];
      }
    }
  }

  for (int i = 0; i < n; i++)
    cout << distant[i] << " ";
  cout << endl;

  return 0;
}
