#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, s;
  cin >> n >> s;
  vector<int> a(n);
  cin >> a[0];
  for (int i = 1; i < n; i++) {
    cin >> a[i];
    a[i] += a[i - 1];
  }

  int ans = INT_MAX;

  for (int i = 0; i < n; ++i) {
    int l = i;
    int r = n - 1;
    int pos = -1;
    while (l <= r) {
      int mid = (l + r) >> 1;
      if ((a[mid] - (i ? a[i - 1] : 0)) <= s) {
        pos = mid;
        l = mid + 1;
      } else
        r = mid - 1;
    }
    if (pos == -1 || (a[pos] - (i ? a[i - 1] : 0)) != s)
      continue;
    ans = min(ans, n - (pos - i + 1));
  }
  cout << (ans == INT_MAX ? -1 : ans) << endl;
}

int t;
int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
