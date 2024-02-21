#include <bits/stdc++.h>

using namespace std;

int t, n, k;

void solve() {
  cin >> n;
  vector<int> a(n);
  k = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    k += a[i];
  }

  k /= n;

  for (int i = 0; i < n; i++) {
    if (a[i] >= k) {
      a[i + 1] += a[i] - k;
    } else {
      cout << "NO" << endl;
      return;
    }
  }

  cout << "YES" << endl;
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
