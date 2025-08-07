#include <bits/stdc++.h>

using namespace std;

int t;

void solve() {
  int n, c, i, j, k;
  cin >> n;
  vector<int> v(10, 0);
  for (int i = 0; i < n; i++) {
    cin >> c;
    v[c % 10]++;
  }
  for (i = 0; i < 10; i++) {
    if (v[i] <= 0)
      continue;
    for (j = 0; j < 10; j++) {
      if (v[j] <= 0 + (i == j))
        continue;
      for (k = 0; k < 10; k++) {
        if (v[k] <= 0 + (i == j) + (i == k))
          continue;
        if (v[k] <= 0 + (j == k))
          continue;
        if ((i + j + k) % 10 == 3) {
          cout << "YES\n";
          return;
        }
      }
    }
  }
  cout << "NO\n";
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
}
