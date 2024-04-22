#include <bits/stdc++.h>
using namespace std;

int solve() {
  int n;
  cin >> n;
  vector<int> a(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ans(n), lst(-1);
  for (int i = 0; i < n; i++)
    if (a[i] != a[0]) {
      ans = min(ans, i - lst - 1);
      lst = i;
    }

  ans = min(ans, n - lst - 1);

  return (ans == n ? -1 : ans);
}

int t;

int main() {
  cin >> t;
  while (t--)
    cout << solve() << "\n";
  return 0;
}
