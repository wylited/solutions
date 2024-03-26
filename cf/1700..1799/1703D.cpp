#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  string s[n];
  map<string, bool> m;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
    m[s[i]] = true;
  }
  for (int i = 0; i < n; i++) {
    bool f = false;
    for (int j = 1; j < s[i].length(); j++) {
      string prefix = s[i].substr(0, j);
      string suffix = s[i].substr(j, s[i].length());
      if (m[prefix] && m[suffix]) {
        f = true;
      }
    }
    cout << f;
  }
  cout << endl;
}

int t;

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
