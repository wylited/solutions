#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<ll> s(n + 1, 0), a(n + 1, 0);
  for (int i = n - k + 1; i <= n; ++i)
    cin >> s[i];
  if (k == 1) {
    cout << "YES\n";
    return;
  }
  for (int i = n - k + 2; i <= n; ++i)
    a[i] = s[i] - s[i - 1];
  if (!is_sorted(a.begin() + n - k + 2, a.end())) {
    cout << "NO\n";
    return;
  }
  if (s[n - k + 1] > a[n - k + 2] * (n - k + 1)) {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
