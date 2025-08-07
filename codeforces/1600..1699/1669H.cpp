#include <bits/stdc++.h>
using namespace std;

void solve() {
  int k, n, i, c, j;
  cin >> n >> k;
  vector<int> a(31, n);

  for (i = 0; i < n; i++) {
    cin >> c;
    for (j = 0; j < 31; j++)
      if (c & 1 << j)
        a[j]--;
  }

  for (j = 30; j > -1; j--)
    if (k >= a[j]) {
      k -= a[j];
      a[j] = 0;
    }

  int ans(0);
  for (j = 30; j > -1; j--)
    if (a[j] == 0)
      ans += 1 << j;
  cout << ans << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
