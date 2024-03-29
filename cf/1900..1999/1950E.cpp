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
    for (int j = 0; j < n && j < i; j++) {
      int c(0);
      for (int k = 0; k < n; k++) {
        if (s[j + k % i] != s[k]) {
          c++;
        }
      }
      if (c <= 1)
        cout << i << endl;
    }
  }
}

int main() {
  cin >> t;
  while (t--)
    solve();
}
