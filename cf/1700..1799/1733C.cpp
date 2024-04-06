#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, i;
  bool even;
  cin >> n;
  vector<long> a(n + 1);

  for (i = 1; i <= n; i++)
    cin >> a[i];

  if (n == 1) {
    cout << 0 << endl;
    return;
  }
  cout << n - 1 << endl << 1 << " " << n << endl; // base

  if (a[1] + a[n] % 2 == 0)
    a[1] = a[n];
  else
    a[n] = a[1];

  even = a[n] % 2;

  for (i = 2; i < n; i++) {
    if (even ^ (a[i] % 2))
      cout << 1 << " " << i;
    else
      cout << i << " " << n;
    cout << endl;
  }
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
