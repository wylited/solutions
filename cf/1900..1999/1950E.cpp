#include <bits/stdc++.h>

using namespace std;
int t, n;

void solve() {
  string s;
  cin >> n >> s;
  for (int i = 1; i <= n; i++) {
    if (n % i != 0) {
      continue;
    }
    int c(0);
    for (int j = 0; j < i; j++) {
      for (int k = j + i; k < n; k += i) {
        if (s[k] != s[j]) {
          c++;
        }
        if (c > 1)
          continue;
      }
    }
    if (c <= 1) {
      cout << i << endl;
      return;
    }
    c = 0;
    for (int j = n - i; j < n; j++) {
      for (int k = j - i; k >= 0; k -= i) {
        if (s[k] != s[j]) {
          c++;
        }
        if (c > 1)
          continue;
      }
    }
    if (c <= 1) {
      cout << i << endl;
      return;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> t;
  while (t--)
    solve();

  return 0;
}
