#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, cnt(0);
  cin >> n;

  vector<int> p(2 * n), x(n), y(n);

  for (int i = 0; i < n; i++)
    cin >> p[i] >> p[n + i];

  sort(p.begin(), p.end());
  x[0] = p[0];
  y[0] = p[2 * n - 1];

  for (int i = 1; i < n; i++) {
    x[i] = p[i];
    y[i] = p[2 * n - i - 1];
    cnt += abs(x[i - 1] - x[i]) + abs(y[i - 1] - y[i]);
  }

  cout << cnt << endl;

  for (int i = 0; i < n; i++)
    cout << x[i] << " " << y[i] << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
