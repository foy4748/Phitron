#include <bits/stdc++.h>

using namespace std;

const int Limit = (1e5) + 5;
int leaders[Limit];
int group_size[Limit];
int levels[Limit];

void dsu_initiate(int n) {

  for (int i = 0; i < n; i++) {
    leaders[i] = -1;
    group_size[i] = 1;
    levels[i] = 0;
  }
}

int dsu_find(int node) {
  if (leaders[node] == -1)
    return node;

  int leader = dsu_find(leaders[node]);

  leaders[node] = leader;

  return leader;
}

// Bad
void dsu_union(int c, int p) {
  int c_leader = dsu_find(c);
  int p_leader = dsu_find(p);

  leaders[c_leader] = p_leader;
}

void dsu_union_by_level(int A, int B) {
  int A_leader = dsu_find(A);
  int B_leader = dsu_find(B);

  if (levels[A_leader] > levels[B_leader]) {
    leaders[B_leader] = A_leader;
  } else if (levels[B_leader] > levels[A_leader]) {
    leaders[A_leader] = B_leader;

  } else {
    leaders[B_leader] = A_leader;
    levels[A_leader]++;
  }
}

void dsu_union_by_group(int a, int b) {
  int A = dsu_find(a);
  int B = dsu_find(b);
  if (group_size[A] > group_size[B]) {
    leaders[B] = A;
    group_size[A] += group_size[B];
  } else {
    leaders[A] = B;
    group_size[B] += group_size[A];
  }
}

int main() {
  // Write your code here

  dsu_initiate(6);

  cout << dsu_find(2) << endl;
  cout << dsu_find(5) << endl;

  dsu_union(0, 3);

  cout << dsu_find(4) << endl;

  for (int i = 0; i < 6; i++)
    cout << leaders[i] << " ";
  cout << endl;

  return 0;
}
