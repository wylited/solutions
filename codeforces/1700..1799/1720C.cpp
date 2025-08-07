#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, c(0), tot(0);
  bool z2(false), z1(false);
  string s;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++) {
    cin >> s;
    c = 0;
    for (int j = 0; j < m; j++) {
      a[i][j] = s[j] - '0';
      c += a[i][j];
      if (!z1 && !a[i][j])
        z1 = true;
    }
    tot += c;
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < m - 1; j++) {
      if (!z2 && a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1] < 3)
        z2 = true;
    }
  }

  if (z2)
    cout << tot;
  else if (z1)
    cout << tot - 1;
  else
    cout << tot - 2;
  cout << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
