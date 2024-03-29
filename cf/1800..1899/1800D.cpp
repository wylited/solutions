#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  int tot(n - 1);
  for (int i = 0; i < n - 2; i++) {
    if (s[i] == s[i + 2]) {
      tot--;
    }
  }
  cout << tot << endl;
}

int t;

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
}
