#include <bits/stdc++.h>

using namespace std;

int search(int val, vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == val) {
      return i;
    }
  }
  return -1;
}

void solve() {
  int n, q, val, i;
  cin >> n >> q;

  vector<int> a(n, 0), t(q, 0);

  for (i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (i = 0; i < q; i++) {
    cin >> val;
    int dis = find(a.begin(), a.end(), val) - a.begin() + 1;
    cout << dis << " ";
    rotate(a.begin(), a.begin() + dis - 1, a.begin() + dis);
  }

  cout << endl;
}

int main() {
  solve();
  return 0;
}
