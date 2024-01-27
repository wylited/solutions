#include <bits/stdc++.h>

using namespace std;

int m, n;

void solve() {
  cin >> n >> m;
  vector<int> t(n), a(n);
  int maximum = 0;

  for (int i = 0; i < n; i++) {
    cin >> t[i] >> a[i];
    maximum = max(maximum, ((m - t[i]) + a[i] - 1) / a[i]);
  }

  cout << maximum + 1 << endl;
}

int main() {
  solve();
  return 0;
}
