#include <bits/stdc++.h>
using namespace std;

string solve() {
  int n, m;
  cin >> n >> m;
  vector<string> a(n);

  for (auto &e : a)
    cin >> e;

  if (a[0][0] == a[n - 1][m - 1] || a[0][m - 1] == a[n - 1][0])
    return "YES\n";

  char rs0 = a[0][0];
  char rsn = a[n - 1][0];
  char cs0 = a[0][0];
  char csm = a[0][m - 1];

  if (rs0 != rsn) {
    bool f = true;
    for (int i = 0; i < m; i++) {
      if (a[0][i] != rs0)
        f = false;
      if (a[n - 1][i] != rsn)
        f = false;
      if (a[0][i] == a[n - 1][i])
        f = false;
    }
    if (f)
      return "NO\n";
  }

  if (cs0 != csm) {
    bool f = true;
    for (int i = 0; i < n; i++) {
      if (a[i][0] != cs0)
        f = false;
      if (a[i][m - 1] != csm)
        f = false;
      if (a[i][0] == a[i][m - 1])
        f = false;
    }
    if (f)
      return "NO\n";
  }

  return "YES\n";
}

int t;

int main() {
  cin >> t;
  while (t--)
    cout << solve();
  return 0;
}
