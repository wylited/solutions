#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int l(0), r(n - 1), s(1), b(n);
  while (s <= b) {
    if (a[l] == s) {
      l++;
      s++;
    } else if (a[l] == b) {
      l++;
      b--;
    } else if (a[r] == s) {
      r--;
      s++;
    } else if (a[r] == b) {
      r--;
      b--;
    } else {
      cout << l + 1 << " " << r + 1 << endl;
      return;
    }
  }
  cout << -1 << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
