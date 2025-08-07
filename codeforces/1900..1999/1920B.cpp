#include <bits/stdc++.h>

using namespace std;

int t, n, k, x, i, ans;

void solve() {
  cin >> n >> k >> x;

  int a[n + 1] = {};
  for (i = 1; i <= n; i++)
    cin >> a[i];

  sort(a + 1, a + n + 1, greater<int>());

  for (i = 1; i <= n; i++)
    a[i] += a[i - 1];

  ans = -1e9;
  for (i = 0; i <= k; i++)
    ans = max(ans, a[n] - 2 * a[min(i + x, n)] + a[i]);

  cout << ans << endl;
}

int main() {
  cin >> t;
  while (t--)
    solve();

  return 0;
}
