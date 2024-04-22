#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k, c;
  string ans("NO\n");
  cin >> n;
  array<int, 200005> a = {0};
  vector<vector<int>> v;

  for (int i = 0; i < n; i++) {
    cin >> k;
    vector<int> num;
    for (int j = 0; j < k; j++) {
      cin >> c;
      a[c]++;
      if (a[c] == 1) {
        num.push_back(c);
      }
    }
    v.push_back(num);
  }

  if (n < 2) {
    cout << "NO\n";
    return;
  }

  for (auto e : v) {
    bool f = true;
    for (auto i : e) {
      if (a[i] == 1) {
        f = false;
        break;
      }
    }
    if (f) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
