#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, t;
  bool f = false;
  cin >> n;
  vector<int> ans;
  cin >> t;
  ans.push_back(t);
  for (int i = 1; i < n; i++) {
    cin >> t;
    if (ans.back() - t < 0 || t == 0) {
      ans.push_back(ans.back() + t);
    } else {
      f = true;
    }
  }
  if (f) {
    cout << -1 << endl;
  } else {
    for (auto a : ans) {
      cout << a << " ";
    }
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
