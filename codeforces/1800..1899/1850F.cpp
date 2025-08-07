#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  int n, res, ans(0);
  cin >> n;
  ll c;
  vector<int> a(n + 1, 0);
  for (int i = 0; i < n; i++) {
    cin >> c;
    if (c <= n)
      a[c]++;
  }

  for (int i = n; i > 0; i--) {
    res = 0;
    for (int j = 1; j * j <= i; ++j) {
      if (i % j == 0) {
        res += a[j] + (j == i / j ? 0 : a[i / j]);
      }
    }
    ans = max(ans, res);
  }
  cout << ans << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
