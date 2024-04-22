#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k, m;
  cin >> n >> m >> k;
  cout << (k >= n - ((n + m - 1) / m) ? "NO\n" : "YES\n");
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
