#include <bits/stdc++.h>

using namespace std;

int t, n, s;

void solve() {
  cin >> n;
  vector<int> a(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  s = a[0] + 1;
  for (int i = 1; i < n; i++) {
    s *= a[i];
  }
  cout << s << endl;
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
