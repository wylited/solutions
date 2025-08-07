#include <bits/stdc++.h>

using namespace std;
int t, n, tmp;

vector<int> cpp[1001];

void solve() {
  cin >> n;
  vector<int> a(1001, 0);
  int ans = -1;

  for (int i = 1; i <= n; i++) {
    cin >> tmp;
    a[tmp] = i;
  }

  for (int i = 1; i <= 1000; ++i) {
    for (int j : cpp[i]) {
      if (a[i] && a[j]) {
        ans = max(ans, a[i] + a[j]);
      }
    }
  }

  cout << ans << endl;
}

int main() {
  for (int i = 0; i <= 1000; i++) {
    for (int j = 0; j <= 1000; j++) {
      if (gcd(i, j) == 1) {
        cpp[i].push_back(j);
      }
    }
  }
  cin >> t;
  while (t--)
    solve();
  return 0;
}
