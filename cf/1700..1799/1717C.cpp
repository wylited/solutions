#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string solve() {
  int n, i;
  string s = "YES\n";
  cin >> n;
  vector<ll> a(n + 1, 0), b(n + 1, 0);
  for (i = 0; i < n; i++)
    cin >> a[i];

  for (i = 0; i < n; i++) {
    cin >> b[i];
    if (b[i] < a[i])
      s = "NO\n";
  }

  a[n] = a[0];
  b[n] = b[0];

  for (i = 0; i < n; i++) {
    if (a[i] == b[i] || b[i] <= b[i + 1] + 1)
      continue;
    else
      s = "NO\n";
  }

  return s;
}

int t;

int main() {
  cin >> t;
  while (t--)
    cout << solve();
  return 0;
}
